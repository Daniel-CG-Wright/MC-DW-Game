using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseMovement : MonoBehaviour
{

    public CharacterController controller;
    public float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.
    public float gravity = -9.81f;

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

    private bool isCrouching;
    private bool duringCrouchAnimation;

    // Update is called once per frame
    void Update()
    {
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);

        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        KeyboardMove(x, z);

        gravityCheck();

        if (isGrounded && velocity.y < 0)
        {
            velocity.y = -1f;
        }

    }

    void KeyboardMove(float x, float z)
    {
        Vector3 moveVector = transform.right * x + transform.forward * z; //Direction player is moving relative to actual player.

        controller.Move(moveSpeed * Time.deltaTime * moveVector); //Should move character

        
    }

    void gravityCheck()
    {

        velocity.y += gravity * Time.deltaTime;

        controller.Move(velocity * Time.deltaTime);

    }
    
}
