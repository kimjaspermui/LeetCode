class Solution {
public:
    int firstUniqChar(string s) {
        
        // this map will store all of the characters have been seen so far
        unordered_map<char, int> seenChar;
        
        // index initialized to -1
        int nonRepeatIndex = -1;

        // for loop to iterate all characters
        for (int i = 0; i < s.length(); i++) {
            
            // get the current character
            char c = s[i];

            // insert current index if not exist yet
            if (seenChar.find(c) == seenChar.end()) {
                
                seenChar.insert({c, 0});
            }
            
            // increment the count for this character
            seenChar.find(c)->second++;   
            
            // if index is -1, use this index if this character hasn't been repeated yet (count is 1)
            if (nonRepeatIndex == -1) {
                
                if (seenChar.find(c)->second == 1) {

                    nonRepeatIndex = i;
                }
            }
            
            // else if it's equal to the previous nonRepeated, then it's repeated
            else if (c == s[nonRepeatIndex]) {

                // increment and index
                nonRepeatIndex++;
                
                // while loop until found a character that has only seen once
                while (seenChar.find(s[nonRepeatIndex])->second != 1) {

                    cout << "enter " << endl;
                    // at the last index, return -1
                    if (nonRepeatIndex == s.length() - 1) {
                        
                        return -1;
                    }
                    
                    // at the current index, reset nonRepeatIndex then break
                    else if (nonRepeatIndex == i) {
                        
                        nonRepeatIndex = -1;
                        break;
                    }
                    
                    // attempt to increment nonRepeatIndex
                    nonRepeatIndex++;
                }
            }
        }
        
        return nonRepeatIndex;
    }
};