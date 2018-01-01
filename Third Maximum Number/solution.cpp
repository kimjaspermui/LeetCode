class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // this will keep track of max three elements
        set<int> maxThree;

        // iterate all elements in nums
        for (int n : nums) {

            maxThree.insert(n);

            // if set is greater than 3 elements then delete the smallest element
            if (maxThree.size() > 3) {

                maxThree.erase(maxThree.begin());
            }
        }

        // print the third max or the maximum depending on set's size
        return maxThree.size() == 3 ? *maxThree.begin() : *--maxThree.end();
    }
};
