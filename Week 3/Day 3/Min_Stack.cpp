/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
Implement the MinStack class:
MinStack() initializes the stack object.
void push(int value) pushes the element value onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.
*/

class MinStack {
public:
     stack<int> s;
     stack<int> ans;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(ans.empty() || ans.top()>=value)
          ans.push(value);
    }
    
    void pop() {
        if(s.top()== ans.top())
            ans.pop();
        s.pop();


    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ans.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
