class Solution {
public:
    int reachNumber(int target) {

        if (target < 0) {

            target = abs(target);
        }

        int currAdd = 0;
        int currPos = 0;

        while (target > currPos) {

            currAdd++;
            currPos += currAdd;
        }

        bool isAlternate = true;

        int originalAdd = currAdd;
        int alternate = currAdd + 2;

        if (currAdd % 2 == 0) {

            alternate = currAdd + 1;
        }

        while (currPos != target) {

            if (isAlternate) {

                currAdd = alternate;
                isAlternate = false;
            }

            else {

                currAdd = originalAdd;
                isAlternate = true;
            }

            currPos--;
        }

        return currAdd;
    }
};
