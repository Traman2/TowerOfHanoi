#include <iostream>
#include "Stack.h"

Stack rodA{};
Stack rodB{};
Stack rodC{};

void printIt() {

    cout << rodA << endl;
    cout << rodB << endl;
    cout << rodC << endl;
}

void moveDisk(char rodFrom, char rodTo) {
    if ((rodFrom == 'A') && (rodTo == 'B'))
        rodB.push(rodA.pop());
    else if ((rodFrom == 'A') && (rodTo == 'C'))
        rodC.push(rodA.pop());
    else if ((rodFrom == 'B') && (rodTo == 'A'))
        rodA.push(rodB.pop());
    else if ((rodFrom == 'B') && (rodTo == 'C'))
        rodC.push(rodB.pop());
    else if ((rodFrom == 'C') && (rodTo == 'A'))
        rodA.push(rodC.pop());
    else
        rodB.push(rodC.pop());
    printIt();
}

void hanoi(int n, char rodFrom, char rodMiddle, char rodTo) { //rodFrom = rodA, rodMiddle = rodB, rodTo = rodC
    //Exit condition
    if(n == 1) {
        cout << "Move disk " << n <<" from rod " << rodFrom << " to rod " << rodTo << endl;
        moveDisk(rodFrom, rodTo);
        return;
    }

    hanoi(n - 1, rodFrom, rodTo, rodMiddle);

    cout << "Move disk " << n << " from rod " <<  rodFrom << " to rod " << rodTo << endl;
    moveDisk(rodFrom, rodTo);

    hanoi(n - 1, rodMiddle, rodFrom, rodTo);

}
int main() {
    int towerSize = 4;
    for(int i = towerSize; i > 0; i--) {
        rodA.push(i); // Pushing in reverse order, otherwise the tower is already in order
    }

    printIt();

    hanoi(towerSize, 'A', 'B', 'C');

    return 0;
}