class Solution {
public:
    string reverseVowels(string s) {
        
        // all vowels
        unordered_set<char> myMap = {'a', 'e', 'i', 'o', 'u', 'A','E', 'I', 'O', 'U'};
        
        // this will contain all vowels in order in the string
        vector<char> allVowels;
        
        // for loop to get all vowels
        for (int i = 0; i < s.length(); i++) {
            
            // current char
            char myChar = s[i];
            
            // if it is in the map, then store it in the vector
            if (myMap.find(myChar) != myMap.end()) {
                
                allVowels.push_back(myChar);
            }
        }
        
        // change the vowels in the string
        for (int i = s.length() - 1, j = 0; i >= 0; i--) {
            
            // current char
            char myChar = s[i];

            // if it is in the map, then change it from the vector
            if (myMap.find(myChar) != myMap.end()) {
                
                s[i] = allVowels[j++];
            }
        }
        
        return s;
    }
};