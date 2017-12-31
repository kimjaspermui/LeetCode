class MyQueue {
public:

    // two stacks, one for input, another one for output
    stack<int> input;
    stack<int> output;

    /** Initialize your data structure here. */
    MyQueue() {

        // do nothing, since stacks have already been declared
    }

    /** Push element x to the back of queue. */
    void push(int x) {

        // push the new element to input
        input.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {

        // peek the top value from output then pop and return
        int toReturn = peek();
        output.pop();

        return toReturn;
    }

    /** Get the front element. */
    int peek() {

        // fill output with input elements if it is empty
        if (output.empty()) {

            while (!input.empty()) {

                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {

        // both must be empty
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
