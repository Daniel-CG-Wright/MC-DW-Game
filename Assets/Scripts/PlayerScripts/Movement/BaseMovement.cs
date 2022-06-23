using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseMovement : MonoBehaviour
{

    public Slider staminabar;
    public Camera cam;
    public CharacterController controller;

    public float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.
    public float gravity = -9.81f;

    public bool CanMove { get; private set; } = true;
    public float walkspeed = 10f;
    public float sprintspeed = 14f;
    public float crouchspeed = 3f;
    public float jumphorzspeed = 4f;

    private float jumpForce = 8.0f;
    public float staminaLoss = 50f; //How much stamina is lost per second
    
    public float jumpStaminaLoss = 100f;
    public float staminaGain = 10f;

    public int minStam = 0;
    public int maxStam = 100;

    Vector3 moveDirection;
    Vector2 currentInput;

    [SerializeField] private float crouchHeight = 0.5f;
    [SerializeField] private float standingHeight = 0.9f;
    [SerializeField] private float crouchTime = 0.5f; //Time in seconds for crouching animation to play
    [SerializeField] private Vector3 standingCenter = new Vector3(0, 0, 0);
    [SerializeField] private Vector3 crouchingCenter = new Vector3(0, 0.5f, 0);

    public bool HoldToCrouch = true;
    bool crouchIsToggled = false;

    public bool HoldToSprint = false;

    private bool isCrouching = false;
    private bool duringCrouchAnimation;


    private bool isSprinting;
    float stamina = 100f;
    // Update is called once per frame

    private bool shouldJump => Input.GetButton("Jump") && controller.isGrounded;
    private bool canCrouch => controller.isGrounded;
    private bool canStand => controller.isGrounded;

    void Update()
    {

        if (CanMove)
        {
            //If player can move, we process inputs
            //Sprint check first to alter movement values
            SprintCheck();

            HandleMovementInput();

            if (shouldJump)
            {
                HandleJump();
            }

            if (canCrouch)
            {
                HandleCrouch();
            }

            ApplyFinalMovement();
        }

        
        
        updateUI();
       
    }

    void HandleMovementInput()
    {
        currentInput = new Vector2(moveSpeed * Input.GetAxis("Vertical"), moveSpeed * Input.GetAxis("Horizontal"));

        float moveY = moveDirection.y;

        moveDirection = (transform.TransformDirection(Vector3.forward) * currentInput.x) + (transform.TransformDirection(Vector3.right) * currentInput.y);
        moveDirection.y = moveY;
        //Processes inputs, adds them to final movement vector.
        
    }

    void HandleCrouch()
    {
        if (Input.GetButtonDown("Crouch"))
        {
            if (isSprinting)
            {
                SprintCancel();
            }
            
            if (!HoldToSprint)
            {
                if (canCrouch)
                {

                    //Can't crouch wehn sprinting or falling
                    CrouchDown();

                }

                else if (isSprinting)
                {
                    //No longer crouching
                    CrouchUp();

                }

            }

            else if (HoldToSprint)
            {
                CrouchDown();


            }

        }

        else if (!Input.GetButton("Crouch") && HoldToSprint && isSprinting)
        {
            CrouchUp();
        }
    }
    void HandleJump()
    {
        moveDirection.y = jumpForce;
    }

    void CrouchDown()
    {
        isCrouching = true;
        moveSpeed = crouchspeed;
        CrouchStand(false);

    }

    void CrouchUp()
    {
        if (!CanStandUp())
        {
            return;
        }
        isCrouching = false;
        moveSpeed = walkspeed;
        CrouchStand(true);
    }

    bool CanStandUp()
    {
        return isCrouching && Physics.Raycast(cam.transform.position, Vector3.up, standingHeight - crouchHeight);
    }
    IEnumerator CrouchStand(bool tostand)
    {
        duringCrouchAnimation = true;
        float timeElapsed = 0;
        float targetHeight = tostand ? standingHeight : crouchHeight;
        float currentHeight = controller.height;
        Vector3 targetCenter = tostand ? standingCenter : crouchingCenter;
        Vector3 currentCenter = controller.center;

        while (timeElapsed < crouchTime)
        {
            controller.height = Mathf.Lerp(currentHeight, targetHeight, timeElapsed / crouchTime);
            controller.center = Vector3.Lerp(currentCenter, targetCenter, timeElapsed / crouchTime);
            timeElapsed += Time.deltaTime;
            yield return null;

        }

        controller.height = targetHeight;
        controller.center = targetCenter;


        duringCrouchAnimation = false;

    }
    private void ApplyFinalMovement()
    {
        if (!controller.isGrounded)
        {
            //Applying gravity
            moveDirection.y += gravity * Time.deltaTime;
        }

        //Reset y velocity if landing
        if (controller.velocity.y < -1 && controller.isGrounded)
        {
            moveDirection.y = 0;
        }

        //Applying all moveidrection
        controller.Move(moveDirection * Time.deltaTime);
    }
    void updateUI()
    {
        staminabar.SetValueWithoutNotify(stamina);

    }
    

    void Sprint()
    {
        if (stamina < 10f)
        {
            return; //Prevents sprinting from being initiated below 10 stamina
        }

        moveSpeed = sprintspeed;
        isSprinting = true;
    }
    void SprintCancel()
    {
        moveSpeed = walkspeed;
        isSprinting = false;
    }
    void SprintCheck()
    {
        if (isSprinting)
        {
            stamina -= staminaLoss * Time.deltaTime;
            stamina = Mathf.Clamp(stamina, minStam, maxStam);

        }
        if (Input.GetButtonDown("Sprint"))
        {
            if (isCrouching && CanStandUp())
            {
                //Stop crouching if sprinting
                CrouchUp();
            }
            else if (isCrouching && !CanStandUp())
            {
                return;
            }
            if (!HoldToSprint)
            {
                if (controller.isGrounded && !isSprinting)
                {

                    //Can't crouch wehn sprinting or falling
                    Sprint();
                }

                else if (isSprinting)
                {
                    //No longer sprinting (toggled off)
                    SprintCancel();

                }
                
            }

            else if (HoldToSprint)
            {
                Sprint();
                //Sprinting on
                

            }

        }

        else if (!Input.GetButton("Sprint") && HoldToSprint && isSprinting)
        {
            SprintCancel();
        }
    }
    
    

}
