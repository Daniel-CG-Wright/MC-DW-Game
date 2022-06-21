using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseMovement : MonoBehaviour
{

    public CharacterController controller;
    public float moveSpeed = 10f; //Stores a movespeed multiplier, can be changed for sprinting etc.
    

    // Update is called once per frame
    void Update()
    {
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 moveVector =  transform.right * x + transform.forward * z; //Direction player is moving relative to actual player.

        controller.Move(moveSpeed * Time.deltaTime * moveVector); //Should move character

    }

    
}
