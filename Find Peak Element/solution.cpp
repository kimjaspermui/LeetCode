class Solution {
public:

    int findPeak(int low, int high, vector<int>& nums) {

        // one element case
        if (low == high) {

            return low;
        }

        // two elements case, pick the larger one
        else if (low + 1 == high) {

            if (nums[low] > nums[high]) {

                return low;
            }

            else {

                return high;
            }
        }

        // middle case, see if
        else {

            // get the middle index
            int middle = (high - low) / 2 + low;

            // case when middle is greater than neighbors
            if (nums[middle] > nums[middle - 1] && nums[middle] > nums[middle + 1]) {

                return middle;
            }

            // case when lower index is greater than middle, peak is at lower side
            else if (nums[middle] < nums[middle - 1] && nums[middle] > nums[middle + 1]) {

                return findPeak(low, middle - 1, nums);
            }

            // case when peak is at higher side or both side, just pick the higher side
            else {

                return findPeak(middle + 1, high, nums);
            }
        }
    }

    int findPeakElement(vector<int>& nums) {

        // find pick on the two ends
        return findPeak(0, nums.size() - 1, nums);
    }
};