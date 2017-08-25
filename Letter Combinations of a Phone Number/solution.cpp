class Solution {
public:
    
    // digits to its characters
    vector<string> myCharacters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
 
    vector<string> letterCombinations(string digits) {

        // if size 0, then return empty vector
        if (digits.length() == 0) {
            
            return vector<string>();
        }
        
        // get the digit for this recursion, then get the digit characters
        int currentDigit = digits[0] - '0';
        string digitChar = myCharacters[currentDigit];
        
        // get the recurrring vector of strings for one less digit
        vector<string> recurringStrings = letterCombinations(digits.substr(1, string::npos));
        
        // this will store the strings with appened recurring strings
        vector<string> appendedStrings;

        // case for single digit, then just append the characters
        if (digits.length() == 1) {
            
            // this will store the single characters
            vector<string> singleChar;
            
            // iterate through all characters of this digit
            for (int i = 0; i < digitChar.length(); i++) {
                
                singleChar.push_back(string(1, digitChar[i]));
            }
            
            return singleChar;
        }
        
        // iterate all characters for this digit
        for (int i = 0 ; i < digitChar.length(); i++) {

            // for loop to append all recurred strings where the first character is
            // from the characters at the current digit
            for (int j = 0; j < recurringStrings.size(); j++) {

                string tempString = recurringStrings[j];
                appendedStrings.push_back(tempString.insert(0, 1, digitChar[i]));
            }
        }
        
        return appendedStrings;
    }
};