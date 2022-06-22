using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class BaseMovement : MonoBehaviour
{

    public Playerinputs inputpackage;
    public CharacterController controller;
    public float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.
    public float gravity = -9.81f;

    public float walkspeed = 10f;
    public float sprintspeed = 14f;
    public float crouchspeed = 6f;
    public float jumpheight = 1f; //jump height in metres


    public Transform groundCheck;
    public float groundDistance = 0.2f;
    public LayerMask groundMask;

    bool isGrounded;
    Vector3 velocity;

    [SerializeField] private float crouchHeight = 0.5f;
    [SerializeField] private float standingHeight = 0.9f;
    [SerializeField] private float timeToCrouch = 0.2f;
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

    private void Awake()
    {
        inputpackage = new Playerinputs();
        
    }

    private void OnEnable()
    {
        inputpackage.Player.Enable();
    }

    private void OnDisable()
    {
        inputpackage.Player.Disable();
    }

    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

        Vector2 inputsmovement = inputpackage.Player.Move.ReadValue<Vector2>();

        float x = inputsmovement.x;
        float z = inputsmovement.y;

        KeyboardMove(x, z);

        gravityCheck();

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = -1f;
        }

        Debug.Log(isGrounded);
    }

    void KeyboardMove(float x, float z)
    {   
        
        Vector3 moveVector = transform.right * x + transform.forward * z; //Direction player is moving relative to actual player.
        //Vector2 moveDirection = moveActi
        controller.Move(moveSpeed * Time.deltaTime * moveVector); //Should move character

        
    }

    void jump()
    {

    }
    void gravityCheck()
    {

        velocity.y += gravity * Time.deltaTime;

        controller.Move(velocity * Time.deltaTime);

    }
    
    
}
