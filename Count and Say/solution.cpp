class Solution {
public:
    
    // this will appened the count plus the number
    void appendChar(string& newString, char c, int count) {

        newString.push_back((char)('0' + count));
        newString.push_back(c);
    }
    
    string countAndSay(int n) {
        
        string current = "1";
        char currentChar = '0';
        int currentCount = 0;
        
        // iterate through sequence
        for (int i = 1; i < n; i++) {

            // reset variables
            string newString = "";
            currentChar = current[0];
            currentCount = 0;
            
            // count the numbers
            for (int j = 0; j < current.length(); j++) {
                
                char c = current[j];
                
                // case for same number, increment the count
                if (currentChar == c) {
                    
                    currentCount++;
                }
                
                // case for different number, update the current number and reset count
                else {
                    
                    appendChar(newString, currentChar, currentCount);
                    currentChar = c;
                    currentCount = 1;  
                }
            }
            
            // append the last one
            appendChar(newString, currentChar, currentCount);
            
            // update the current with new string generated
            current = newString;
        }
        
        return current;
    }
};