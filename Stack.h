//
// Created by tejas on 6/20/2024.
//

#ifndef TOWEROFHANOI_STACK_H
#define TOWEROFHANOI_STACK_H

#include <cstddef>
#include <ostream>

using namespace std;

class Stack {
public:
    Stack();
    Stack(int initCap);

    bool isEmpty();
    int peek();
    int pop();
    void push(int item);

private:
    size_t size;
    int values[];

    void doubleCapacity();

};

ostream& operator<<(ostream& stream, const Stack& obj);

#endif //TOWEROFHANOI_STACK_H
