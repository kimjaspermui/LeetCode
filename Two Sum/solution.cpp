#include <algorithm>

int findNum(vector<int>& myVector, int number, int avoid) {

    for (int i = 0; i < myVector.size(); i++) {

        if (myVector[i] == number && i != avoid) {

            return i;
        }
    }
}

void copyVector(vector<int>& vector1, vector<int>& vector2) {

    for (int num : vector2) {

        vector1.push_back(num);
    }
}

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> sorted;
        copyVector(sorted, nums);
        std::sort(sorted.begin(), sorted.end());
        vector<int> result;

        for (int i = 0; i < sorted.size(); i++) {

            int pair = target - sorted[i];

            if (binary_search(sorted.begin(), sorted.end(), pair)) {

                result.push_back(findNum(nums, sorted[i], -1));
                result.push_back(findNum(nums, pair, result[0]));

                return result;
            }
        }

        return result;
    }
}
