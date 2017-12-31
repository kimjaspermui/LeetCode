class Solution {
public:
    bool wordPattern(string pattern, string str) {

        // paired will store characters have been paired
        // stringPair will store string's character paired
        unordered_set<char> paired;
        unordered_map<string, char> stringPair;

        // start and end indices of a word
        int start = 0;
        int end = 0;

        // this will keep track of the current patternIndex
        int patternIndex = 0;

        // keep looping while both indices are not out of boudns
        while (patternIndex < pattern.length() && start < str.length()) {

            // get the current pattern
            char currPattern = pattern[patternIndex++];

            // move end to the space character or the length
            while (end < str.length() && str[end] != ' ') {

                end++;
            }

            // get the word
            string currString = str.substr(start, end - start);

            // check if this string hasn't been paired
            if (stringPair.find(currString) == stringPair.end()) {

                // return false if this char has been paired
                if (paired.find(currPattern) != paired.end()) {

                    return false;
                }

                // insert a new pair
                stringPair.insert({currString, currPattern});
                paired.insert(currPattern);
            }

            // return false if it is not the current pattern
            if (stringPair.find(currString)->second != currPattern) {

                return false;
            }

            // start at the next of end
            start = end + 1;
            end = end + 1;
        }

        // both index must be at the end to be true
        return patternIndex == pattern.length() && start >= str.length();
    }
};
