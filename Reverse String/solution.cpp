class Solution {
public:
    string reverseString(string s) {

        // indices from two ends
        int low = 0;
        int high = s.length() - 1;

        // keep looping while indices haven't met
        while (low < high) {

            // swap characters
            char tempChar = s[low];
            s[low++] = s[high];
            s[high--] = tempChar;
        }

        return s;
    }
};
