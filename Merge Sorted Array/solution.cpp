class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // both ends then the merged end indices
        int end1 = m - 1;
        int end2 = n - 1;
        int end = m + n - 1;

        // loop while end2 is not out of bounds
        while (end2 >= 0) {

            // if end1 is not out of bounds and greater than end2
            // then move element from nums1
            if (end1 >= 0 && nums1[end1] >= nums2[end2]) {

                nums1[end--] = nums1[end1--];
            }

            // otherwise, move element from nums2
            else {

                nums1[end--] = nums2[end2--];
            }
        }
    }
};
