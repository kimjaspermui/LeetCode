class MovingAverage {
public:

    // queue to store the elements
    queue<int> myQueue;

    // size of the sliding window
    int maxSize = 0;

    // this will keep track of the current sum of existing elements
    int currSum = 0;

    /** Initialize your data structure here. */
    MovingAverage(int size) {

        // initialized the size of sliding window
        maxSize = size;
    }

    double next(int val) {

        // if queue reach the size of sliding window, take out one element
        if (myQueue.size() == maxSize) {

            currSum -= myQueue.front();
            myQueue.pop();
        }

        // update sum and enqueue the element
        currSum += val;
        myQueue.push(val);

        // get the current average
        return (double) currSum / myQueue.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
