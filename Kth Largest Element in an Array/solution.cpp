class Solution {
public:
    
    int findKthLargest(vector<int>& nums, int k) {
        
        // get a random pivot
        srand(time(NULL));
        int pivotIndex = rand() % nums.size();
        int pivot = nums[pivotIndex];
        
        // three vectors to partitions
        vector<int> less;
        vector<int> equal;
        vector<int> greater;
        
        // populate the vectors by comparisons
        for (int data : nums) {
            
            if (data < pivot) {
                
                less.push_back(data);
            }
            
            else if (data > pivot) {
                
                greater.push_back(data);
            }
            
            else {
                
                equal.push_back(data);
            }
        }
        
        // case when greater vector is larger or equal, then recurse on that
        if (greater.size() >= k) {
            
            return findKthLargest(greater, k);
        }
        
        // case when the sum of greater and equal is greater than or equal, then we found it
        else if (greater.size() + equal.size() >= k) {
            
            return pivot;
        }
        
        // case when less contains the kth largest, recurse on that with modified k
        else {
            
            return findKthLargest(less, k - greater.size() - equal.size());
        }
    }
};