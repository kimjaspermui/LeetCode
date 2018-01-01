class Solution {
public:

    // this function will swap the current string given the start and end of the word
    void reverseString(string& s, int start, int end) {

        while (start < end) {

            // swap to reverse the current string
            char temp = s[end];
            s[end--] = s[start];
            s[start++] = temp;
        }
    }

    string reverseWords(string s) {

        // current segment of the word
        int start = 0;
        int end = 0;

        // keep looping until end hits the end
        while (end < s.length()) {

            // find the next space index or the end of string
            while (end < s.length() && s[end] != ' ') {

                end++;
            }

            // reverse the word for this segment
            reverseString(s, start, end-1);

            // update the indices for next segment
            start = end + 1;
            end = end + 1;
        }

        return s;
    }
};
