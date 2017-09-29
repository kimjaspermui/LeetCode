class Solution {
public:
    string convert(string s, int numRows) {
        
        // edge case, if numRows is 0 or 1 or less than or string length is equal to numRows
        // then return same string
        if (numRows == 0 || numRows == 1 || s.length() <= numRows) {
            
            return s;
        }
        
        // get the max interval
        int maxInterval = (numRows - 1) * 2;
        
        // this will hold the current zigzag string
        string zigZag;
        
        // the extra interval in between Z
        int subInterval = maxInterval - 2;
        
        // iterate through rows
        for (int i = 0; i < numRows; i++) {
            
            // start from the ith index
            int currIndex = i;
            
            // case for top and bottom of Z
            if (i == 0 || i == numRows - 1) {
                
                // get the next character using maxInterval
                while (currIndex < s.length()) {
                    
                    zigZag.push_back(s[currIndex]);
                    currIndex += maxInterval;
                }
            }
            
            // case for row with sub intervals
            else {
                
                // get the difference from max to sub interval
                int diffInterval = maxInterval - subInterval;
                
                // set sub interval to on initially
                bool subOn = true;
                
                // get the next character using sub and diff interval alternatively
                while (currIndex < s.length()) {
                    
                    zigZag.push_back(s[currIndex]);
                    
                    // update the current index then alternate the switch
                    currIndex += subOn ? subInterval : diffInterval;
                    subOn = subOn ? false : true;
                }
                
                // decrement subInterval by 2 for next row
                subInterval -= 2;
            }
        }

        return zigZag;
    }
};