//
//  SpecialStack.h
//  Program 4
//
//  Created by Brian Klumpp on 11/24/24.
//

#ifndef SPECIALSTACK_H
#define SPECIALSTACK_H

#include <stack>
#include <stdexcept>
#include <iostream>

using namespace std;

// Class for special stack
class SpecialStack {

    public:
        SpecialStack();
        void push(int value);
        void pop();
        int peek();
        bool empty();
        void printStack();
        void popOdd();
        void popEven();

    protected:
    
    
    private:
        stack<int> stk;
};

#endif  
