class Solution {
public:
    string reverseString(string s) {

        // initialized space for the return string
        char myCharArray[s.length() + 1];

        // get the length of the string
        int myLength = s.length();

        // for loop to iterate the entire string
        for (int i = 0; i < myLength; i++) {

            // get characters from the end
            myCharArray[i] = s[myLength - i - 1];
        }

        // add a terminated character
        myCharArray[myLength] = '\0';

        return myCharArray;
    }
};