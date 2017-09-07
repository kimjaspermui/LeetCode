class Solution {
public:
    int jump(vector<int>& nums) {
        
        // the last index pushed in the queue
        int currentIndex = 0;
        
        // the size of the current level, and the temporary size of the new level
        int currentSize = 1;
        int tempSize = 0;
        
        // the current minimum jump/level
        int minJump = 0;
        
        // the queue, initialized with the first index
        queue<int> myQueue;
        myQueue.push(0);
        
        // while loop til queue is empty or currentIndex reached the current index
        while (!myQueue.empty() && currentIndex < (int) nums.size() - 1) {

            // loop until the size of this level has been exhausted
            while (currentSize--) {

                // get the next index
                int index = myQueue.front();
                myQueue.pop();
                
                // get the value at that index
                int value = nums[index];
                
                // get the count of new elements to be pushed
                int count = (index + value) - currentIndex;
                
                // push the children
                for (int j = 0; j < count; j++) {
                    
                    myQueue.push(++currentIndex);
                    tempSize++;
                    
                    // when last index has been reached, return a +1 minJump
                    if (currentIndex == nums.size() - 1) {
                        
                        return minJump + 1;
                    }
                }
            }
            
            // reset the current size and temp size then increment minJump for next level
            currentSize = tempSize;
            tempSize = 0;
            minJump++;
        }
        
        return minJump;
    }
};