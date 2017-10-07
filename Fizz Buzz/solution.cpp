class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> outputStrings;
        
        // for loop from 1 to n
        for (int i = 1; i <= n; i++) {
            
            // case for divisible by 3 and 5
            if (i % 3 == 0 && i % 5 == 0) {
                
                outputStrings.push_back("FizzBuzz");
            }
            
            // case for divisible by 3
            else if (i % 3 == 0) {
                
                outputStrings.push_back("Fizz");
            }
            
            // case for divisible by 5
            else if (i % 5 == 0) {
                
                outputStrings.push_back("Buzz");
            }
            
            // otherwise, print the nunmber
            else {
                
                outputStrings.push_back(to_string(i));
            }
        }
        
        return outputStrings;
    }
};