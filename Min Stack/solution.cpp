class MinStack {
public:
    /** initialize your data structure here. */
    
    stack<pair<int, int>> myStack;

    MinStack() {
        
    }
    
    void push(int x) {
        
        // initialize min to maximum int
        int min = INT_MAX;
        
        // if stack is not empty then get the current min
        if (!myStack.empty()) {
            
            min = myStack.top().first;
        }
        
        // update min if necessary
        min = (min < x) ? min : x;
        
        // push the new pair to the stack
        myStack.push({min, x});
    }
    
    void pop() {
        
        myStack.pop();
    }
    
    int top() {
        
        return myStack.top().second;
    }
    
    int getMin() {
        
        return myStack.top().first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */