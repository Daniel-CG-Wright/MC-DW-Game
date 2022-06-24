using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseMovement : MonoBehaviour
{

    [Header("Serialized objects")]
    public Slider staminabar;
    public Camera cam;
    public CharacterController controller;

    [Header("Jump settings")]
    
    [SerializeField] private float gravity = -9.81f;
    [SerializeField] private float landingTime = 0.5f;
    [SerializeField] private float jumphorzspeed = 4f;
    [SerializeField] private float landingSpeed = 4f;
    [SerializeField] private float jumpForce = 5.0f;
    [SerializeField] private float landinglimitspeed = -4f; //Sets the downward speed above which falls cause a slowdown on landing. May be implemented in fall dmg as well later.
    [SerializeField] private float jumpStaminaLoss = 20f;
    [SerializeField] private float landingSpeedRatio = 0.2f;
    private bool jumpWasPressed;

    private bool justLanded = false;
    private bool shouldJump => Input.GetButton("Jump") && controller.isGrounded && !justLanded;

    [Header("Sprint settings")]

    [SerializeField] private float stamina = 100f;
    [SerializeField] private float sprintspeed = 12f;
    [SerializeField] private float staminaLoss = 10f; //How much stamina is lost per second when sprinting
    [SerializeField] private float staminaGain = 10f;
    [SerializeField] private int minStam = 0;
    [SerializeField] private int maxStam = 100;
    [SerializeField] private bool HoldToSprint = false;
    private bool isSprinting;
    

    [Header("Crouch settings")]

    [SerializeField] private float crouchspeed = 3f;
    [SerializeField] private bool HoldToCrouch = true;
    [SerializeField] private float crouchHeight = 0.5f;
    [SerializeField] private float standingHeight = 0.9f;
    [SerializeField] private float crouchTime = 0.5f; //Time in seconds for crouching animation to play
    [SerializeField] private Vector3 standingCenter = new Vector3(0, 0, 0);
    [SerializeField] private Vector3 crouchingCenter = new Vector3(0, 0.5f, 0);
    private bool isCrouching = false;
    private bool duringCrouchAnimation;
    private bool canCrouch => controller.isGrounded;
    private bool canStand => isCrouching && !Physics.Raycast(cam.transform.position, Vector3.up, standingHeight - crouchHeight) && controller.isGrounded && !justLanded;


    [Header("Movement")]

    [SerializeField] private float walkspeed = 7f;
    public bool CanMove { get; private set; } = true;
    Vector3 moveDirection;
    Vector2 currentInput;
    [SerializeField] private float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.


    void Update()
    {

        if (CanMove)
        {
            //If player can move, we process inputs
            //Sprint check first to alter movement values
            ApplyMovementSpeeds();

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

    

    void ApplyMovementSpeeds()
    {
        ///Applies any continuous alterations to base movement speed due to crouching, being in the air etc
        SprintCheck();
        if (justLanded)
        {
            //Handled speed in coroutine for onlanding
        }
        else if (isSprinting)
        {
            moveSpeed = sprintspeed;
            stamina -= staminaLoss * Time.deltaTime;
            stamina = Mathf.Clamp(stamina, minStam, maxStam);
        }
        else if (isCrouching)
        {
            moveSpeed = crouchspeed;
        }
        else if (!controller.isGrounded)
        {
            moveSpeed = jumphorzspeed;
        }
        else
        {
            moveSpeed = walkspeed;
            if (stamina < maxStam)
            {
                stamina += staminaGain * Time.deltaTime;
                stamina = Mathf.Clamp(stamina, minStam, maxStam);
            }
            

        }
    }
    void HandleMovementInput()
    {
        currentInput = new Vector2(moveSpeed * Input.GetAxis("Vertical"), moveSpeed * Input.GetAxis("Horizontal"));

        //Stops sprinting horizontally, and cancels sprinting if not moving forward.
        if ((currentInput.x <= 0 || currentInput.y != 0) && isSprinting)
        {
            SprintCancel();
        }
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
            
            if (!HoldToCrouch)
            {
                if (canCrouch && !isCrouching)
                {

                    //Can't crouch wehn sprinting or falling
                    CrouchDown();

                }

                else if (isCrouching && canStand)
                {
                    //No longer crouching
                    CrouchUp();

                }

            }

            else if (HoldToCrouch)
            {
                CrouchDown();


            }

        }

        else if (!Input.GetButton("Crouch") && HoldToCrouch && isCrouching && canStand)
        {
            CrouchUp();
        }
    }
    void HandleJump()
    {
        if (stamina < jumpStaminaLoss)
        {
            return;
        }
        if (isCrouching && canStand)
        {
            CrouchUp();
        }
        else if (isCrouching && !canStand)
        {
            return;
        }

        SprintCancel();
        moveDirection.y = jumpForce;
        stamina -= jumpStaminaLoss;
        jumpWasPressed = true;
    }

    void CrouchDown()
    {
        isCrouching = true;
        StopCoroutine(CrouchStand(true));
        StartCoroutine(CrouchStand(false));

    }

    void CrouchUp()
    {
        if (!canStand)
        {
            return;
        }
        isCrouching = false;
        StopCoroutine(CrouchStand(false));
        StartCoroutine(CrouchStand(true));
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

    float landingSpeedCalc(float timeElapsed)
    {
        return Mathf.Pow(timeElapsed, 3f) / 4;
    }

    IEnumerator OnLanding()
    {
        ///Slows down character for the landing time after landing a jump.
        float timeElapsed = 0f;
        justLanded = true;

        while (timeElapsed < landingTime)
        {
            //Smoothly increases speed
            //moveSpeed = Mathf.Lerp(landingSpeed, walkspeed, timeElapsed);
            moveSpeed = landingSpeedCalc(timeElapsed * (1/landingSpeedRatio)) + 4;
            moveSpeed = Mathf.Clamp(moveSpeed, landingSpeed, walkspeed);

            timeElapsed += Time.deltaTime;
            yield return null;
        }

        justLanded = false;
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
            if (controller.velocity.y < landinglimitspeed || jumpWasPressed)
            {
                StartCoroutine(OnLanding());
                jumpWasPressed = false;
            }
            moveDirection.y = 0;
            //As we have just landed, we do the landing thing
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
        if (stamina < 10f || controller.velocity.y < landinglimitspeed)
        {
            return; //Prevents sprinting from being initiated below 10 stamina
        }

        isSprinting = true;
    }
    void SprintCancel()
    {
        isSprinting = false;
    }
    void SprintCheck()
    {
        if (stamina <= 0f)
        {
            SprintCancel();
        }
        if (justLanded)
        {
            return;
        }
        
        if (Input.GetButtonDown("Sprint"))
        {
            if (isCrouching && canStand)
            {
                //Stop crouching if sprinting
                CrouchUp();
            }
            else if (isCrouching && !canStand)
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
