class Solution {
public:
    string intToRoman(int num) {
        
        // these will hold all of the roman units along with its values
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string units[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        // this will keep track the current roman unit pair from highest
        int unitIndex = 0;
        
        // this will hold the roman representation
        string myString = "";
        
        // while number is not 0
        while (num) {
            
            // case when this unit is within the number
            if (values[unitIndex] <= num) {
                
                // append the unit then decrease the number by the value
                myString += units[unitIndex];
                num -= values[unitIndex];
            }
            
            // otherwise, go to the next unit
            else {
                
                unitIndex++;
            }
        }
        
        return myString;
    }
};