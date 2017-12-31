class MyStack {
public:

    queue<int> myQueue;

    /** Initialize your data structure here. */
    MyStack() {

        // do nothing since already declared a queue variable
    }

    /** Push element x onto stack. */
    void push(int x) {

        // push new element to the back of queue
        myQueue.push(x);

        for (int i = 0; i < myQueue.size() - 1; i++) {

            // put the front to end until we see the new one just pushed
            // this will keep the elements in reverse
            myQueue.push(myQueue.front());
            myQueue.pop();
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {

        // get the element the pop it
        int myElement = myQueue.front();
        myQueue.pop();

        return myElement;
    }

    /** Get the top element. */
    int top() {

        return myQueue.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {

        return myQueue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
