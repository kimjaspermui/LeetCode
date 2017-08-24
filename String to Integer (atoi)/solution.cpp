class Solution {
public:
    int myAtoi(string str) {
        
        // i for index, myInt for int value, then sign for sign
        int i = 0;
        long long myInt = 0;
        int sign = 1;
        
        // find the first non-whitespace character
        while (str[i] == ' ') {
            
            i++;
        }
        
        // case for negative sign
        if (str[i] == '-') {
            
            sign = -1;
            i++;
        }
        
        // case for plus sign
        else if (str[i] == '+') {
            
            i++;
        }
        
        // case for non-digit
        else if (!(str[i] >= '0' && str[i] <= '9')) {
            
            return 0;
        }
        
        // while there are digits, keep adding
        while (str[i] >= '0' && str[i] <= '9') {
            
            // get the digit then add it to myInt
            char temp = str[i] - '0';
            myInt = myInt * 10 + temp;
            
            i++;
            
            if (myInt > INT_MAX) {
                
                return sign == 1 ? INT_MAX : INT_MIN; 
            }
        }
        
        myInt = sign * myInt;
        
        // positive case
        if (sign == 1) {
            
            return myInt > INT_MAX ? INT_MAX : (int) myInt;
        }
        
        // negative case
        else {
            
            return myInt < INT_MIN ? INT_MIN : (int) myInt;
        }
    }
};