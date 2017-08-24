class Solution {
public:
    string intToRoman(int num) {
        
        // this will hold all of the roman units
        vector<pair<int, string>> romanUnits = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                                {400, "CD"}, {100, "C"}, {90, "XC"},
                                                {50, "L"}, {40, "XL"}, {10, "X"},
                                                {9, "IX"}, {5, "V"}, {4, "IV"},
                                                {1, "I"}};
        
        // this will keep track the current roman unit pair from highest
        int unitIndex = 0;
        
        // this will hold the roman representation
        string myString;
        
        // while number is not 0
        while (num) {
            
            // get the pair of units
            pair<int, string> myPair = romanUnits[unitIndex];
            
            // case when this unit is within the number
            if (myPair.first <= num) {
                
                // append the unit then decrease the number by the value
                myString.append(myPair.second);
                num -= myPair.first;
            }
            
            // otherwise, go to the next unit
            else {
                
                unitIndex++;
            }
        }
        
        return myString;
    }
};