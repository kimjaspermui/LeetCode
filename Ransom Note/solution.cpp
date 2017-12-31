class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        // to count the frequency of each characters in ransomNote
        // and the total count
        vector<int> freq(26, 0);
        int count = 0;

        // for loop to iterate the characters in ransomNote
        for (int i = 0; i < ransomNote.length(); i++) {

            // get the char index then increment to count
            freq[ransomNote[i] - 'a']++;
            count++;
        }

        // iterate the characters in magazine to check if
        // ransomNote can be constructed
        for (int i = 0; i < magazine.length() && count; i++) {

            // get the corresponding index for this character
            int currIndex = magazine[i] - 'a';

            // if there is still frequency, decrement
            if (freq[currIndex]) {

                freq[currIndex]--;
                count--;
            }
        }

        return !count;
    }
};
