class Solution {
public:
    int firstUniqChar(string s) {

        // alphabet size and its count vector initialized to 0
        int ALPHABET = 26;
        vector<int> count(ALPHABET, 0);

        // iterate all elements in the string to count
        for (int i = 0; i < s.length(); i++) {
            
            // increment the count for this character
            count[s[i] - 'a']++;
        }
        
        // iterate all elements in the string to find the character with 1 count
        for (int i = 0; i < s.length(); i++) {
            
            // count of 1 for this character
            if (count[s[i] - 'a'] == 1) {
                
                return i;
            }
        }
        
        // otherwise, just return -1 for no non-repeat character
        return -1;
    }
};