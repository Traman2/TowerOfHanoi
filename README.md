# Tower of Hanoi

The Tower of Hanoi is a classic programming problem in computer science that can be solved with the use of recursions. You can solve the problem by using a certain set of rules as follows:

1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
3. No larger disk may be placed on top of a smaller disk.

The minimum number of moves required to solve a Tower of Hanoi puzzle with \( n \) disks is \( 2^n - 1 \). I have designed a C++ program that will show you how to solve any numbers of disks in the Tower of Hanoi problem and have created a visual in the console to show how you to move the disks in what order to solve it.

## Example of the Problem

Consider a Tower of Hanoi puzzle with 3 disks (denoted as 1 being the smallest, 2, and 3 being the largest):

1. Start: All disks are on rod A in ascending order (largest at the bottom, smallest at the top). Side note: I have represented the disk with a number corresponding to the size of the disk in the implementation, 1 = small and towerSize = largest disk size
2. Goal: Move all disks to rod C, obeying the rules above.

Steps:
- Move disk 1 from A to C: The smallest disk (disk 1) is moved directly from rod A to rod C.
- Move disk 2 from A to B: The next larger disk (disk 2) is moved from rod A to rod B. This step uses rod C as auxiliary.
- Move disk 1 from C to B: Now, the smallest disk (disk 1) is moved from rod C to rod B. This completes the transfer of disks required for disk 2 to move to rod C in the next step.
- Move disk 3 from A to C: Finally, the largest disk (disk 3) is moved from rod A to rod C. This step uses rod B as auxiliary.
- Move disk 1 from B to A: The smallest disk (disk 1) is moved from rod B to rod A.
- Move disk 2 from B to C: The next larger disk (disk 2) is moved from rod B to rod C. This step uses rod A as auxiliary.
- Move disk 1 from A to C: Finally, the smallest disk (disk 1) is moved from rod A to rod C.

This sequence solves the puzzle in 7 moves as calculated using the formula above.

## How to adjust the tower size

In the main.cpp file, there is a variable called 'towerSize'. Change the int value to adjust the size of the towers and see how the program solves the problem with visuals

```cpp 
int towerSize = 0 // Change this to adjust the tower size
```
