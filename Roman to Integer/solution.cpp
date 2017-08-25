class Solution {
public:
    int romanToInt(string s) {
        
        // mapping the units to its values
        unordered_map<char, int> myMap = {{'I', 1}, {'V', 5}, {'X', 10},
                                          {'L', 50}, {'C', 100}, {'D', 500},
                                          {'M', 1000}};
        
        // initiate with last unit's value
        int myInt = myMap[s.back()];
        
        // for loop from second to the end unit
        for (int i = s.length() - 2; i >= 0; i--) {
            
            // if the unit is less than the next unit then subtract this value, otherwise add it
            myInt += (myMap[s[i]] < myMap[s[i + 1]]) ? -1 * myMap[s[i]] : myMap[s[i]];
        }
        
        return myInt;
    }
};