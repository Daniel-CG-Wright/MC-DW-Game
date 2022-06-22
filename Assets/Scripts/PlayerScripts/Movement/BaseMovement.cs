using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class BaseMovement : MonoBehaviour
{

    public CharacterController controller;
    public float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.
    public float gravity = -9.81f;

    public float walkspeed = 10f;
    public float sprintspeed = 14f;
    public float crouchspeed = 3f;
    public float jumphorzspeed = 4f;
    public float jumpheight = 1f; //jump height in metres


    public Transform groundCheck;
    public float groundDistance = 0.2f;
    public LayerMask groundMask;

    bool isGrounded;
    Vector3 velocity;

    [SerializeField] private float crouchHeight = 0.5f;
    [SerializeField] private float standingHeight = 0.9f;
    [SerializeField] private float timeToCrouch = 0.001f;
    [SerializeField] private Vector3 crouchingCenter = new Vector3(0, 0.5f, 0);
    [SerializeField] private Vector3 standingCenter = new Vector3(0, 0, 0);

    public bool HoldToCrouch = true;
    bool crouchIsToggled = false;

    public bool HoldToSprint = false;

    private bool isCrouching;
    private bool duringCrouchAnimation;


    private bool isSprinting;
    int stamina = 100;
    // Update is called once per frame

    

    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);


        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");
        
        KeyboardMove(x, z);
        //Debug.Log(moveSpeed);

        velocity.y += gravity * Time.deltaTime;


        if (isGrounded && velocity.y == 0)
        {
            velocity.y = -1f;
        }
        else if (isGrounded && !isSprinting)
        {
            moveSpeed = walkspeed;

        }
        else if (!isGrounded && velocity.y < 0)
        {
            moveSpeed = jumphorzspeed;
        }
            
        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            if (isCrouching)
            {
                CrouchStand();
            }
            
            velocity.y = Jump();
        }
        controller.Move(velocity * Time.deltaTime);

        Crouch();

    }

    void KeyboardMove(float x, float z)
    {
        SprintCheck();
        Debug.Log(moveSpeed);

        Vector3 moveVector = transform.right * x + transform.forward * z; //Direction player is moving relative to actual player.
        //Vector2 moveDirection = moveActi
        controller.Move(moveSpeed * Time.deltaTime * moveVector); //Should move character

        
    }

    void Sprint()
    {
        moveSpeed = sprintspeed;
        isSprinting = true;
        Debug.Log("spirnt");
    }
    void SprintCancel()
    {
        moveSpeed = walkspeed;
        isSprinting = false;
        Debug.Log("l(");
    }
    void SprintCheck()
    {
        if (Input.GetButtonDown("Sprint"))
        {
            if (isCrouching)
            {
                CrouchStand();
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
        float velocity = Mathf.Sqrt(jumpheight * -2 * gravity);
        return velocity;
    }
    
    void Crouch()
    {
        

        if (Input.GetButtonDown("Crouch"))
        {
            SprintCancel();
            if (!HoldToCrouch)
            {
                crouchIsToggled = !crouchIsToggled;
                if(isGrounded && !isSprinting && !crouchIsToggled)
                {

                    //Can't crouch wehn sprinting or falling
                    CrouchStand();
                }

            else if (crouchIsToggled)
                {

                    CrouchStand();

                }

            }

            else if (HoldToCrouch)
            {
                CrouchStand();

            }

        }
        
        else if (!Input.GetButton("Crouch") && HoldToCrouch && isCrouching)
        {
            CrouchStand();
        }
       


            

        
    }

    private void CrouchStand()
    {
        ///Lerps between crouching or standing

        duringCrouchAnimation = true; //Start crouching

        float targetHeight = isCrouching ? standingHeight : crouchHeight;
        float currentHeight = controller.height;
        Vector3 targetCenter = isCrouching ? standingCenter : crouchingCenter;

        
        controller.height = targetHeight;
        controller.center = targetCenter;

        isCrouching = !isCrouching;
        moveSpeed = isCrouching ? crouchspeed : walkspeed;

        duringCrouchAnimation = false; //End crouching
    }

}
