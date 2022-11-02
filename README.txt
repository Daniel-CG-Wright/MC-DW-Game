DELETE AFTER ACKNOWLEDGEMENT

- Pickup at high latency has no function as the server code means the gun appears in different spots for client and server, so picking up is impossible.
Just run the code on the client, there is no point checking for server.

- Muzzle flash functions need BP implementation once you're ready.

- We need to check projectile onHit for BP implementations. We need to check against character (player/AI), 
destructible object (such as glass)/physics based object (such as a basketball) and 
non-destructible object  (such as outer walls). We could maybe do this 
through a 'hitInteraction' component and utilize something similar for hitscan. 
The component would be used for all interactions on being hit.