class Solution {
public:
    int countSegments(string s) {

        // the index and the segment count
        int currIndex = 0;
        int segments = 0;

        // keep looping while index is within the bound
        while (currIndex < s.length()) {

            // keep looping until a non-space character is found
            while (currIndex < s.length() && s[currIndex] == ' ') {

                currIndex++;
            }

            // if it hits the end, return current segments, no new segment
            if (currIndex == s.length()) {

                return segments;
            }

            // increment for new segment
            segments++;

            // keep looping until a space character is found or out of bounds
            while (currIndex < s.length() && s[currIndex] != ' ') {

                currIndex++;
            }
        }

        return segments;
    }
};
