class Solution {
public:
    bool wordPattern(string pattern, string str) {
     
        // this will store the character and its corresponding string pair
        unordered_map<char, string> myMap;
        
        // this will store already inserted words
        unordered_set<string> myChecker;
        
        // this will stream the string
        stringstream ss(str);
        
        // this will store the temporary input
        string input;
        
        // for loop to iterate all pattern symbols
        for (int i = 0; i < pattern.length(); i++) {
            
            // get the pattern symbol and the word separated by space
            char myChar = pattern[i];
            getline(ss, input, ' ');
            
            // if the patten has no corresponding string yet, create one
            if (myMap.find(myChar) == myMap.end()) {
                
                // case when this word has already a pair
                if (myChecker.find(input) != myChecker.end()) {
                    
                    return false;
                }
                
                myMap.insert({myChar, input});
                myChecker.insert(input);
            }
            
            // otherwise, get the string then compare
            else {
                
                auto myItr = myMap.find(myChar);
                
                // if not equal to current word, return false
                if (myItr->second.compare(input) != 0) {

                    return false;
                }
            }
        }
        
        // return true if all words have been read
        return ss.eof();
    }
};