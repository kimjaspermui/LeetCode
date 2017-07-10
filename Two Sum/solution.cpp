class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        unordered_map<int, int> myMap;

        for (int i = 0; i < nums.size(); i++) {

            int pair = target - nums[i];
            auto pairIterator = myMap.find(pair);

            if (pairIterator != myMap.end()) {

                result.push_back(pairIterator->second);
                result.push_back(i);

                return result;
            }

            else {

                myMap.insert({nums[i], i});
            }
        }

        return result;
    }
};
