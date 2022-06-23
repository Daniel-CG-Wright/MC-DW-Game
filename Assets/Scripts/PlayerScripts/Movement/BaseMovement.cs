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

    public float walkspeed = 10f;
    public float sprintspeed = 14f;
    public float crouchspeed = 3f;
    public float jumphorzspeed = 4f;
    public float jumpheight = 1f; //jump height in metres
    public float staminaLoss = 50f; //How much stamina is lost per second
    public float jumpLoss = 100f;
    public float staminaGain = 10f;

    public int minStam = 0;
    public int maxStam = 100;
    public Transform groundCheck;
    public float groundDistance = 0.2f;
    public LayerMask groundMask;

    bool isGrounded;
    Vector3 velocity;

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

    

    void Update()
    {

        isGrounded = controller.isGrounded;//Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);


        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");
        //Checks for crouching.
        Crouch();
        if (stamina == 0f)
        {
            //Stops sprinting if stamina runs out.
            SprintCancel();
        }
        KeyboardMove(x, z);
        //Debug.Log(moveSpeed);
        if (isSprinting)
        {
            stamina -= staminaLoss * Time.deltaTime; //Reduces stamina
            
        }



        
        if (isGrounded && !isSprinting)
        {
            //Sets movespeed to walkspeed if not sprinting, crouching or jumping.
            moveSpeed = walkspeed;
            stamina += staminaGain * Time.deltaTime;

        }
        else if (!isGrounded && velocity.y < 0)
        {
            //sets movespeed to slower if in the air and falling.
            moveSpeed = jumphorzspeed;
        }
            
        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            if (isCrouching && CanStandUp())
            {
                //Stands before jumping
                CrouchUp();
                velocity.y = Jump();
            }
            else if (!isCrouching)
            {
                velocity.y = Jump();
            }
            //Jumping y velocity
            
        }

        if (!isGrounded)
        {
            //Increases y velocity downward by gravity.
            velocity.y += gravity * Time.deltaTime;
        }

        if (controller.velocity.y < -1 && controller.isGrounded)
        {
            velocity.y = 0;
        }
        controller.Move(velocity * Time.deltaTime);

        
        
        stamina = Mathf.Clamp(stamina, minStam, maxStam);
        updateUI();
       
    }

    void updateUI()
    {
        staminabar.SetValueWithoutNotify(stamina);

    }
    void KeyboardMove(float x, float z)
    {
        SprintCheck();

        Vector3 moveVector = transform.right * x + transform.forward * z; //Direction player is moving relative to actual player.
        //Vector2 moveDirection = moveActi
        controller.Move(moveSpeed * Time.deltaTime * moveVector); //Should move character

        
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
                if (isGrounded && !isSprinting)
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
    float Jump()
    {
        if (stamina < jumpLoss)
        {
            return 0f;
        }
        float velocity = Mathf.Sqrt(jumpheight * -2 * gravity);
        stamina -= jumpLoss; //Makes jumping use stamina
        return velocity;
    }
    
    bool CanStandUp()
    {
        ///Returns true if can stand up, otherwise returns false.
        return !Physics.Raycast(cam.transform.position, Vector3.up, (standingHeight - crouchHeight));
        
    }
    void Crouch()
    {
        

        if (Input.GetButtonDown("Crouch"))
        {
            SprintCancel();
            if (!HoldToCrouch)
            {
                if(isGrounded && !isSprinting && !crouchIsToggled)
                {

                    //Can't crouch wehn sprinting or falling
                    Debug.Log("crouching");
                    crouchIsToggled = true;
                    CrouchDown();
                }

            else if (crouchIsToggled && CanStandUp())
                {
                    crouchIsToggled = false;
                    Debug.Log("uncrouching");
                    CrouchUp();
                }

            }

            else if (HoldToCrouch)
            {
                
                CrouchDown();
            }

        }
        
        else if (!Input.GetButton("Crouch") && HoldToCrouch && isCrouching && CanStandUp())
        {
            CrouchUp();
        }
       


            

        
    }

    private void CrouchUp()
    {
        if (duringCrouchAnimation)
        {
            return;
        }
        isCrouching = false;
        StartCoroutine(CrouchMovement(true));

    }
    private void CrouchDown()
    {
        
        if (duringCrouchAnimation)
        {
            return;
        }
        isCrouching = true;
        StartCoroutine(CrouchMovement(false));

    }
    IEnumerator CrouchMovement(bool goingup)
    {
        Debug.Log("cwfrw");
        duringCrouchAnimation = true;
        float timeElapsed = 0f;
        float targetHeight = goingup ? standingHeight : crouchHeight;
        float currentHeight = controller.height;
        Vector3 targetCenter = goingup ? standingCenter : crouchingCenter;
        Vector3 currentCenter = controller.center;

        while (timeElapsed < crouchTime)
        {
            controller.height = Mathf.Lerp(currentHeight, targetHeight, timeElapsed / crouchTime);
            controller.center = Vector3.Lerp(currentCenter, targetCenter, timeElapsed / crouchTime);
            timeElapsed += Time.deltaTime;
            yield return null;
        }

        controller.height = targetHeight;
        controller.center = targetCenter; //Cleanly finishes transition




        duringCrouchAnimation = false;

    }
    

}
