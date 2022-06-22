using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MouseLook : MonoBehaviour
{

    public float mouseSensitivity = 100f; //Mouse sensitivity value
    public Transform playerBody; //Stores body of player, set in inspector

    float xRotation = 0f;

    // Start is called before the first frame update
    void Start()
    {
        //Locks cursor to centre of camera and screen.
        Cursor.lockState = CursorLockMode.Locked;
        

    }


    // Update is called once per frame
    void Update()
    {

        float x = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime; //Gets mouse X data, normalised for framerate and sensitivity.
        float y = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime; //Gets mouse Y data

        xRotation -= y;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f); //Prevents player from looking over themselves

        //Rotating body of player based on mouse X movement.
        playerBody.Rotate(Vector3.up * x);

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f); //Y transform




    }
}
