class Solution {
public:
    int lengthOfLastWord(string s) {

        // this will keep track of the current and previous word count
        int count = 0;
        int previousCount = 0;

        // for loop to iterate the entire string
        for (int i = 0; i < s.length(); i++) {
            // case for space
            if (s[i] == ' ') {
                // if count is not 0, update the previous
                if (count != 0) {
                    previousCount = count;
                    count = 0;
                }
            }

            // case for other character
            else {

                count++;
            }
        }

        // either return count when it's not 0 or previous count
        return count ? count : previousCount;
    }
};
