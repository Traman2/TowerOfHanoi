//
// Created by tejas on 6/20/2024.
//

#include "Stack.h"
#include <exception>
#include <iostream>

using namespace std;

Stack::Stack() : Stack(2) {
}

Stack::Stack(size_t initCap) {
    stack = new int[initCap]; //Create a new array to pointer in the free store
}

bool Stack::isEmpty() const {
    return size == 0;
}

int Stack::peek() {
    if(size > 0) return stack[size - 1];
    else throw invalid_argument("size is less than 0");
}

int Stack::pop() {
    if(!this->isEmpty()){
        int answer = stack[size - 1];
        stack[size] = -1; //-1 represents null
        size--;
        return answer;
    }
    else throw invalid_argument("This array is already empty");
}

void Stack::push(int item) {
    if(!this->isEmpty()){
        this->doubleCapacity();
    }
    stack[size] = item;
    size++;

}

void Stack::doubleCapacity() {
    int* newStack = new int[size * 2]; //Create new pointer in free store

    for(int i = 0; i < size; i++) {
        newStack[i] = stack[i];
    }

    delete[] stack;
    stack = newStack;


}

Stack::~Stack() {
    delete[] stack;
}

ostream& operator<<(ostream& stream, const Stack& st){
    if (st.isEmpty()) {
        stream << "[Stack is empty]";
    } else {
        stream << "[";
        for (int i = 0; i < st.size - 1; ++i) {
            stream << st.stack[i] << ", ";
        }
        stream << st.stack[st.size - 1] << "]";
    }
    return stream;
}