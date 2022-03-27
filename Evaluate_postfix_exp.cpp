#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class CQStack
{
    int maxSize; // size of stack array
    int *stackArray;
    int top; // top of stack

public:
    // constructor
    CQStack(int s)
    {
        maxSize = s;                   // set array size
        stackArray = new int[maxSize]; // create array
        top = -1;                      // no items yet
    }

    // Add element on the top of the stack
    void push(int j)
    {
        if (isFull())
        {
            return;
        }
        else
        {
            stackArray[++top] = j; // increment top, insert item
        }
    }

    // Remove element from the top of the stack
    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            int temp = stackArray[top--];
            return temp; // access item, decrement top
        }
    }

    // Return true is stack is empty
    bool isEmpty()
    {
        return (top == -1);
    }

    // Return true if stack is full
    bool isFull()
    {
        return (top == maxSize - 1);
    }
};

/* pop(),push(int j) already defined in stack */

int evalPostfix(CQStack *stack, string exp) {
    for (int i = 0; exp[i]; ++i) {
        if (isdigit(exp[i]))
            stack->push(exp[i] - '0');
        else {
            int val2 = stack->pop();
            int val1 = stack->pop();
            switch (exp[i]) {
                case '+':
                    stack->push(val1 + val2);
                    break;
                case '-':
                    stack->push(val1 - val2);
                    break;
                case '*':
                    stack->push(val1 * val2);
                    break;
                case '/':
                    stack->push(val1 / val2);
                    break;
                case '^':
                    stack->push(pow(val1, val2));
                    break;
            }
        }
    }
    return stack->pop();
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string expr;
        CQStack *stack = new CQStack(1000);
        cin >> expr;
        int result = evalPostfix(stack, expr);
        cout << result << endl;
    }
    return 0;
}