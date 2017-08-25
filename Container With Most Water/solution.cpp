class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // start from two end points
        int begin = 0;
        int end = height.size() - 1;
        
        // this will keep track of the largest container size
        int maxArea = 0;

        // begin and end didn't meet, keep checking area
        while (begin != end) {
            
            // get the current area by using the lowest height, then update maxArea accordingly
            int currentArea = (end - begin) * (height[begin] <= height[end] ? height[begin++] : height[end--]);
            maxArea = currentArea > maxArea ? currentArea : maxArea;
        }
        
        return maxArea;
    }
};