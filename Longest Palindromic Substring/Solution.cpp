class Solution {
public:
    
    // this function will check the longest palindrome from this initial end point
    void checkPalindrome(string s, int low, int high, int& start, int& maxLength) {
        
        // decrement low index and increment high index while within the bound
        // and same character
        while (low >= 0 && high < s.length() && s[low] == s[high]) {
            
            low--;
            high++;
        }
        
        // minus 2 corresponds to extra two index and plus 1 to include the one end from difference
        int tempLength = high - low - 2 + 1;
        
        // when temporary length is larger, update start index and the length
        if (tempLength > maxLength) {
            
            start = low + 1;
            maxLength = tempLength;
        }
    }
    
    string longestPalindrome(string s) {
        
        // initialize max length with 0 and starting index to 0
        int maxLength = 0;
        int start = 0;
        
        // for loop to try every index as middle of a palindrome and find the longest one
        for (int i = 0; i < s.length(); i++) {
            
            // odd case
            checkPalindrome(s, i, i, start, maxLength);
            
            // even case
            checkPalindrome(s, i, i + 1, start, maxLength);
        }
        
        return s.substr(start, maxLength);
    }
};