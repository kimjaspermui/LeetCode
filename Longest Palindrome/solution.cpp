class Solution {
public:
    int longestPalindrome(string s) {

        // initialize the frequency array to 0
        int frequency[256] = {0};

        // boolean to indicate if odd frequency character has been encountered
        bool foundOdd = false;

        // this will keep track of the longest palindrome can be created
        int longest = 0;

        // for loop to iterate through the entire string
        for (int i = 0; i < s.length(); i++) {

            // increment the frequency for this character
            frequency[s[i]]++;
        }

        // iterate through the frequency array
        for (int i = 0; i < 256; i++) {

            // get the frequency
            int myFrequency = frequency[i];

            // if the frequency is odd case
            if (myFrequency % 2 == 1) {

                // if odd not found, then make it true
                if (!foundOdd) {

                    foundOdd = true;
                }

                // otherwise, decrement it
                else {

                    myFrequency--;
                }
            }

            // add the length to longest
            longest += myFrequency;
        }

        return longest;
    }
};