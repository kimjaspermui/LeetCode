class Solution {
public:
    
    // this will check a potential palindrome
    void checkPalindrome(string s, int j, int k, int& start, int& maxLength) {
        
        // while it's within the bound check move two sides
        while (j >= 0 && k < s.size() && s[j] == s[k]) {
            
            j--;
            k++;
        }
        
        // compare the current palindrome size with the maximum length
        if (maxLength < k - j - 1) {
            
            // update the length if it's greater, also update the starting index
            maxLength = k - j - 1;
            start = j + 1;
        }
    }
    
    string longestPalindrome(string s) {

        // just return the string if 0 or 1 length
        if (s.size() < 2) {

            return s;
        }

        // this will keep track of the low index of longest palindrome and its length
        int start = 0;
        int maxLength = 1;

        for (int i = 0; i < s.length(); i++) {

            // check odd length palindrome
            checkPalindrome(s, i, i, start, maxLength);
            
            // check even length palindrome
            checkPalindrome(s, i, i + 1, start, maxLength);
        }

        return s.substr(start, maxLength);
    }
};