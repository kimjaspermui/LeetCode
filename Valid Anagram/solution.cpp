class Solution {
public:
    bool isAnagram(string s, string t) {
     
        // number of alphabets
        const int ALPHABET = 26;
        
        // this will keep track of the size of s
        int size = s.length();
        
        // this will keep track of the characters count
        vector<int> characterCount(ALPHABET, 0);
        
        // first iterate through s to count
        for (int i = 0 ; i < s.length(); i++) {
            
            characterCount[s[i] - 'a']++;
        }
        
        // then iterate through t to check
        for (int i = 0; i < t.length(); i++) {
            
            // if the count is 0 then it's false
            if (characterCount[t[i] - 'a'] == 0) {
                
                return false;
            }
            
            // decrement the count and size
            characterCount[t[i] - 'a']--;
            size--;
        }
        
        // return true when size is 0
        return size == 0;
    }
};