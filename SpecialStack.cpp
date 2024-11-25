//
//  SpecialStack.cpp
//  Program 4
//
//  Created by Brian Klumpp on 11/24/24.
//

#include "SpecialStack.h"
#include <iostream>

using namespace std;

// Constructor for special stack
SpecialStack::SpecialStack() {}


void SpecialStack::push(int value) {
    stk.push(value);
}


void SpecialStack::pop() {
    if (stk.empty()) {
        throw runtime_error("Stack is empty, cant pop");
    }
    stk.pop();
}


int SpecialStack::peek() {
    if (stk.empty()) {
        throw runtime_error("Stack is empty, cant peek.");
    }
    return stk.top();
}
// Check if the stack is empty
bool SpecialStack::empty() {
    return stk.empty();
}

void SpecialStack::printStack() {
    if (stk.empty()) {
        cout << "Stack is empty." << endl;
        return;
    }

    stack<int> temp = stk;
    cout << "Stack elements: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

void SpecialStack::popOdd() {
    if (stk.empty()) {
        throw runtime_error("Stack is empty, cant pop odd.");
    }

    stack<int> tempStack;
    bool foundOdd = false;

    while (!stk.empty()) {
        int value = stk.top();
        stk.pop();

        if (!foundOdd && value % 2 != 0) {
            foundOdd = true;
        } else {
            tempStack.push(value);
        }
    }

    if (!foundOdd) {
        throw runtime_error("No odd number found to pop.");
    }

        while (!tempStack.empty()) {
        stk.push(tempStack.top());
        tempStack.pop();
    }
}

void SpecialStack::popEven() {
    if (stk.empty()) {
        throw runtime_error("Stack is empty, cant pop");
    }

    stack<int> tempStack;
    bool foundEven = false;

    while (!stk.empty()) {
        int value = stk.top();
        stk.pop();

        if (!foundEven && value % 2 == 0) {
            foundEven = true;
        } else {
            tempStack.push(value);
        }
    }

    if (!foundEven) {
        throw runtime_error("No even number found to pop.");
    }

    while (!tempStack.empty()) {
        stk.push(tempStack.top());
        tempStack.pop();
    }
}
