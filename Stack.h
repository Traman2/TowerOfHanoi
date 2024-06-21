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
    Stack(); //Default constructor
    explicit Stack(size_t initCap);
    ~Stack();

    bool isEmpty() const;
    int peek();
    int pop();
    void push(int item);

private:
    size_t size {0};
    int* stack;
    friend ostream& operator<<(ostream& stream, const Stack& st);

    void doubleCapacity();

};

ostream& operator<<(ostream& stream, const Stack& st);

#endif //TOWEROFHANOI_STACK_H
