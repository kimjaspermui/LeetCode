class Solution {
public:
    bool canPermutePalindrome(string s) {

        // the count of the characters
        int myCount[256] = {0};

        // this will be a flag to indicate if odd number of count has been seen
        bool sawOdd = false;

        // iterate through the string characters
        for (int i = 0; i < s.length(); i++) {

            // increment the count
            myCount[s[i]]++;
        }

        // iterate through the count list
        for (int i = 0; i < 256; i++) {

            // get the count for this character
            int myNum = myCount[i];

            // if the count is odd
            if (myNum % 2 != 0) {

                // haven't saw odd yet, make it true
                if (!sawOdd) {

                    sawOdd = true;
                }

                // otherwise, more that one odd, return false
                else {

                    return false;
                }
            }
        }

        return true;
    }
};