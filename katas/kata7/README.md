### Shadows of the knight
##### Episode 1

#### The goal
Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off.

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.

#### The rules
Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position: 
```
U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)
```

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index `(0,0)`.
#### Some notes
For some tests, the bombs' location may change from one execution to the other: the goal is to help you find the best algorithm in all cases.

The tests provided are similar to the validation tests used to compute the final score but remain different.

#### Game input
The program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.
```
Line 1: 2 integers W H -> Represents width and height of the building
Line 2: 1 integer N -> Number of jumps Batman can make
Line 3: 2 integers X0 Y0 -> Batman initial position
```

#### Constraints
```
1 ≤ W ≤ 10000
1 ≤ H ≤ 10000
2 ≤ N ≤ 100
0 ≤ X, X0 < W
0 ≤ Y, Y0 < H
Response time per turn ≤ 150ms
Response time per turn ≤ 150ms
```
#### A possible solution
A possible solution to this problem is to always calculate the midpoint. It is the safest thing to do in terms of approximating an unknown point. And this is called: <b> Binary Search</b>  It all depends on the input received. We need to take into consideration the direction where  the bomb was spotted. So, depending on the input direction, it's gonna check that resulting quadrant and start narrowing the search interval. Waht the code will do is to crop the matrix every time a guess is given. But in this approach, if the guess is totally wrong (not possible for this problem), then the bomb will explode. 
As **binary searches**  have complexity is `O(n log(n))` the overall performance will be similar to that complexity. 