class Solution {
public:
    string reverseVowels(string s) {

        // low and high indices from two ends
        int low = 0;
        int high = s.length();

        // vowels in hash table
        unordered_set<char> vowels = {'a','e','i','o','u',
                                      'A','E','I','O','U'};

        // keep looping while two pointers haven't met
        while (low < high) {

            // get the characters
            char lowChar = s[low];
            char highChar = s[high];

            // if low is not a vowel increment to find a vowel
            if (vowels.find(lowChar) == vowels.end()) {

                low++;
            }

            // if high is not a vowel, decrement to find a vowel
            else if (vowels.find(highChar) == vowels.end()) {

                high--;
            }

            // both are vowels, swap characters then update indices
            else {

                s[low++] = highChar;
                s[high--] = lowChar;
            }
        }

        return s;
    }
};
