### Coders strike back
##### Episode 1

#### The goal
Win the race of bots. There is a map with several checkpoints in it. The bot (player or rocket) will have to accelerate in order to win the race. 

As far as I got, there are three stages for the race. 
1. Simple thrust
2. Cornering acceleration
3. Boost usage 

#### The rules
The circuit of the race is made up of checkpoints. To complete one lap, your vehicle (pod) must pass through each checkpoints in order and back through the start. The first player to reach the starting checkpoint on the final lap wins.

The pods work as follows:
To pass a checkpoint, the center of a pod must be inside the radius of the checkpoint.
To move a pod, you must print a target destination point followed by a thrust value. Details of the protocol can be found further down.
The thrust value of a pod is its acceleration and must be between 0 and 100.
You can use 1 acceleration boost in the race, you need only replace the thrust value by the BOOST keyword.

#### Victory / Lose Conditions
**Victory** <br> 
Be the first to complete all the laps of the circuit with your pod.
**Lose**  <br>
Your program provides incorrect output.
Your program times out.
Your pod does not reach the next checkpoint in time.
Somebody else wins.

#### Some notes
The program must, within an infinite loop, read the contextual data from the standard input and provide to the standard output the desired instructions.

The tests provided are similar to the validation tests used to compute the final score but remain different.

#### Game input and output

**Input**
The program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.
```
Line 1:  6 integers x & y for your pod's position. nextCheckpointX & nextCheckpointY for the coordinates of the next checkpoint the pod must go through. nextCheckpointDist for the computed distance between your pod and the next checkpoint, nextCheckpointAngle for the angle in degrees between your pod orientation and the direction of the next checkpoint (from -180 to 180).
Line 2:2 integers opponentX & opponentY for the opponent pod's position.
```

**Output**
One line: 2 integers for the target coordinates of your pod followed by thrust, the thrust to give to your pod. You may replace the thrust value by BOOST.


#### Constraints
```
Constraints
0 ≤ thrust ≤ 100
Response time first turn ≤ 1000ms
Response time per turn ≤ 100ms
```