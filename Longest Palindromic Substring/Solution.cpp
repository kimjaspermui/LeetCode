class Solution {
public:
    string longestPalindrome(string s) {

        if (!s.length()) {

            return s;
        }

        string longest = string(s[0]);
        int longestNum = 1;

        for (int i = 1; i < s.length(); i++) {

            // set up for even length palindrome
            int j = i - 1;
            int k = i;
            int tempLength = 0;

            // even length
            while (j >= 0 && k < s.length() && s[j] == s[k]) {

                j--;
                k++;
            }

            // get the length of this palindrome, -2 for two extra moves from j and k
            tempLength = (k--) - (j++) + 1 - 2;

            if (tempLength > longest) {

                longestNum = tempLength;

                // todo: check documentation
                longest = s.substr(j, k);
            }

            // odd length
            j = i - 1;
            k = i + 1;
            while (j >= 0 && k < s.length() && s[j] == s[k]) {

                j--;
                k++;
            }

            // get the length of this palindrome, -2 for two extra moves from j and k
            tempLength = (k--) - (j++) + 1 - 2;

            if (tempLength > longest) {
                
                longestNum = tempLength;

                // todo: check documentation
                longest = s.substr(j, k);
            }
        }

        return longest;
    }
};