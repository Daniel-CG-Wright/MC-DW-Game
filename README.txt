DELETE AFTER COMPLETION

- URGENT: SPREAD CAN CURRENTLY BE HACKED AS IT IS DETERMINED RANDOMLY ON CLIENT SIDE. DETERMINE IT RANDOMLY ON SERVER SIDE.
A way we can do this is as follows:
1. After firing generate the next random rotator server-side
2. Replicate to client
3. Show this on client on their next shot, and use it on server, so that client sees same spread as server.
This uses a bit of bandwidth, however, and may not be worth it as the player cannot correct for random spread anyway, only recoil.
This same system SHOULD be used for horizontal recoil though as that actually does need to be synced.
For now we will do away with horizontal recoil and allow spread to do that instead, as they both function the same right now.
If we decide otherwise, we can just allow a mismatch between client and server, which will look a bit weird but have no effect on gameplay.
Then again if we allow a mismatch it could appear as a hit on client and not on server or vice versa.

- Pickup at high latency has no function as the server code means the gun appears in different spots for client and server, so picking up is impossible.
Recommended fix - keep client part the same, then just make sure client is within a set distance (e.g. 2x the interaction distance) from the gun on the
server to allow them to pick it up (to prevent hackers picking weapons up across the map).

- Muzzle flash functions need BP implementation once you're ready.


- We need to check projectile onHit for BP implementations. We need to check against character (player/AI), 
destructible object (such as glass)/physics based object (such as a basketball) and 
non-destructible object  (such as outer walls). We could maybe do this 
through a 'hitInteraction' component and utilize something similar for hitscan. 
The component would be used for all interactions on being hit.