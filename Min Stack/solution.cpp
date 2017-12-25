class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int, int>> myStack;

    MinStack() {

        // don't need to do anything since stack has been initialized
    }

    void push(int x) {

        // if stack is empty, then push current element and use it as min
        if (myStack.empty()) {

            myStack.push(make_pair(x, x));
        }

        // otherwise, compare with current min then push the x with min
        else {

            int currMin = myStack.top().second;

            if (x < currMin) {

                currMin = x;
            }

            myStack.push(make_pair(x, currMin));
        }
    }

    void pop() {

        // just pop one element
        myStack.pop();
    }

    int top() {

        // return the value at the top of stack
        return myStack.top().first;
    }

    int getMin() {

        // return the current min
        return myStack.top().second;
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
