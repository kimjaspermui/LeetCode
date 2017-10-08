class Solution {
public:
    string reverseString(string s) {
        
        // loop through the string until i is >= j, othewise, swap the characters
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            
            // swap the characters
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        
        return s;
    }
};