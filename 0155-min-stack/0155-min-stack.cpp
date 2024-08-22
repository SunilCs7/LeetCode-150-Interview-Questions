#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> mainStack;   // Stack to store elements
    stack<int> minStack;    // Stack to store the minimum elements

public:
    MinStack() {
        // Constructor initializes empty stacks
    }
    
    void push(int val) {
        mainStack.push(val);
        // Push onto minStack if it's the new minimum or minStack is empty
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        // If the top of mainStack is the current minimum, pop it from minStack
        if (mainStack.top() == minStack.top()) {
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top(); // Return the top element of mainStack
    }
    
    int getMin() {
        return minStack.top(); // Return the top element of minStack, the minimum element
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */