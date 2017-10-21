class Solution {
public:
    
    void checkPalindrome(int low, int high, string s, int& start, int& maxLength) {
        
        // while in bound and equal, decrement and increment
        while (low >= 0 && high < s.length() && s[low] == s[high]) {
            
            low--;
            high++;
        }
        
        // get the current length
        int tempLength = high - low - 2 + 1;
        
        // if greater than max, then update low index and the max length
        if (tempLength > maxLength) {
            
            start = low + 1;
            maxLength = tempLength;
        }
    }
    
    string longestPalindrome(string s) {
        
        // initialize the start and the maximum length
        int start = 0;
        int maxLength = 0;
        
        // for loop to start from all characters
        for (int i = 0; i < s.length(); i++) {
            
            // odd and even case
            checkPalindrome(i, i, s, start, maxLength);
            checkPalindrome(i, i+1, s, start, maxLength);
        }
        
        return s.substr(start, maxLength);
    }
};