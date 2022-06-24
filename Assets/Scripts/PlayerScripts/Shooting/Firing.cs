using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Firing : MonoBehaviour
{
    [Header("Serialized Objects")]
    [SerializeField] private GameObject projectile;
    [SerializeField] private GameObject cosmeticProjectile; //These projectiles will likely be part of gun data when in final build.
    [SerializeField] private Camera cam;
    [SerializeField] private GameObject GunBarrel;


    [Header("Gun Data")]
    //This section is just for debugging and will all be collected from gun data when gun is switched in game.
    bool isProjectile = true;
    bool isAuto = true;
    [SerializeField] private float launchVelocity = 700f;
    [SerializeField] private float fireRate = 0.5f; //Firerate of gun (bps)
    private float nextFire = 0f; //Time at which next bullet can be fired.
    [SerializeField] private float fireRange = 100f; //Fire range
    
    // Update is called once per frame
    void Update()
    {
        //When we start, or when we switch guns, we will have to get all the gun data for that specific gun and load it into this class. TODO
        GetFireInput();
    }

    void GetFireInput()
    {

        if (((Input.GetButton("Fire1") && isAuto) || Input.GetButtonDown("Fire1")) && Time.time > nextFire)
        {
            HandleFire();
        }
        
    }
    void HandleFire()
    {
        if (isProjectile)
        {
            ShootProjectile();
        }
        else
        {
            ShootHitscan();
        }
    }
    void ShootProjectile()
    {
        GameObject shot = Instantiate(projectile, transform.position, transform.rotation);

        Vector3 projectileVelocity = transform.forward * launchVelocity;

        shot.GetComponent<Rigidbody>().AddForce(projectileVelocity);

        nextFire = Time.time + fireRate;

        //ShootVisualProjectile();
    }

    void ShootVisualProjectile()
    {
        Ray ray = cam.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0));
        RaycastHit rayHit;
        Debug.DrawRay(ray.origin, ray.direction, Color.blue, 1f);
        
        //Vector3 rayDirection = (ray.GetPoint()
        Physics.Raycast(GunBarrel.transform.position, ray.direction, out rayHit);
        GameObject visualshot = Instantiate(cosmeticProjectile, GunBarrel.transform.position, GunBarrel.transform.rotation);
        Vector3 direction = (rayHit.point - GunBarrel.transform.position).normalized;

        Vector3 projectileVelocity = direction * launchVelocity;

        Rigidbody body = visualshot.GetComponent<Rigidbody>();
        body.AddForce(projectileVelocity);
        


    }

    void ShootHitscan()
    {

    }
}
