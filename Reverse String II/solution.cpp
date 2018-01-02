class Solution {
public:

    // this will reverse the segment [start, end] in s
    void reverse(string& s, int start, int end) {

        // while loop to reverse segment [start, end]
        while (start < end) {

            // swap to reverse
            char temp = s[end];
            s[end--] = s[start];
            s[start++] = temp;
        }
    }

    string reverseStr(string s, int k) {

        // for loop where index increment by 2k
        for (int i = 0; i < s.length(); i += 2 * k) {

            // end start from i
            int end = i;

            // increment end while it doesn't reach the end of k length
            while (end < s.length() && end != i + k) {

                end++;
            }

            // reverse the segments [i, end-1]
            reverse(s, i, end-1);
        }

        return s;
    }
};
