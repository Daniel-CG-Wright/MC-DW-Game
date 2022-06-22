using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class MouseLook : MonoBehaviour
{
    public Playerinputs input;

    public float mouseSensitivity = 100f; //Mouse sensitivity value
    public Transform playerBody; //Stores body of player, set in inspector

    float xRotation = 0f;

    // Start is called before the first frame update
    void Start()
    {
        //Locks cursor to centre of camera and screen.
        Cursor.lockState = CursorLockMode.Locked;
        

    }

    private void Awake()
    {
        input = new Playerinputs();
    }
    private void OnEnable()
    {
        input.Player.Enable();
    }
    private void OnDisable()
    {
        input.Player.Disable();
    }

    // Update is called once per frame
    void Update()
    {

        //loat mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime; //Gets mouse X data, normalised for framerate and sensitivity.
        //float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime; //Gets mouse Y data

        Vector3 lookInput = input.Player.Look.ReadValue<Vector2>();

        float x = lookInput.x;
        float y = lookInput.y;
        xRotation -= y;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f); //Prevents player from looking over themselves

        //Rotating body of player based on mouse X movement.
        playerBody.Rotate(Vector3.up * x);

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f); //Y transform




    }
}
