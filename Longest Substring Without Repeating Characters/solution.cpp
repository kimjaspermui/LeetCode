class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // array to check index of the current substring's characters
        int myArray[256] = {0};
        
        // keep track of longest substring 
        int longest = 0;
        
        // for loop to iterate through the entire string
        for (int begin = 0, end = 0; end < s.length(); end++) {

            // update begin if the repeated character index is larger
            begin = (myArray[s[end]] > begin) ? myArray[s[end]] : begin;
            
            // update the index of this character (all indices increases by 1)
            myArray[s[end]] = end + 1;
            
            // update longest if necessary
            longest = (end - begin + 1 > longest) ? end - begin + 1 : longest;
        }

        return longest;
    }
};