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
    [SerializeField] private float projectileSpeed = 700f;
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
        Ray ray = cam.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0));
        RaycastHit hit;
        Vector3 destination;

        if (Physics.Raycast(ray, out hit))
        {
            destination = hit.point;
        }
        else
        {
            destination = ray.GetPoint(fireRange);

        }

        //Above code finds the point where we are aiming
        nextFire = Time.time + fireRate;
        InstantiateProjectile(destination);

        //LOOK INTO BULLET POOLING, OR MANAGING BULLETS VIA THEIR SINGLE POSITIONS, FOR PERFORMANCE- then check for collisions the old fashioned way.

    }

    void InstantiateProjectile(Vector3 destination)
    {
        GameObject projectileObj = Instantiate(projectile, GunBarrel.transform.position, Quaternion.identity) as GameObject;
        projectileObj.GetComponent<Rigidbody>().velocity = (destination - GunBarrel.transform.position).normalized * projectileSpeed;
    }
    

    void ShootHitscan()
    {

    }
}
