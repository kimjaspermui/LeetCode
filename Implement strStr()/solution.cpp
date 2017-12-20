class Solution {
public:
    int strStr(string haystack, string needle) {

        // outer loop will iterate the haystack start characters
        for (int i = 0; ; i++) {

            // inner loop will iterate needle characters
            for (int j = 0; ; j++) {

                // if j reaches the end, then return i as the start index
                if (j == needle.length()) {

                    return i;
                }

                // if combine is equal to length of haystack, return -1 since
                // no substring is possible to equal to needle beyond this point
                if (i + j == haystack.length()) {

                    return -1;
                }

                // if the needle character is not equal to haystack's, break out
                if (needle[j] != haystack[i + j]) {

                    break;
                }
            }
        }
    }
};
