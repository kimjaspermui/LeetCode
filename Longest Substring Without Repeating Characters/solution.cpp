class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // hash table to check character already seen along with its index
        unordered_map<char, int> myMap;
        
        // keep track of longest substring 
        int longest = 0;
        
        // to keep track the beginning of current substring
        int begin = 0;
        int end = 0;
        
        // for loop to iterate through the entire string
        for (; end < s.length(); end++) {
            
            // case for non-repeated character
            if (myMap.find(s[end]) == myMap.end()) {
                
                myMap.insert({s[end], end});
            }
            
            // case for repeated character
            else {

                // update longest if necessary
                int tempLength = end - begin;
                longest = tempLength > longest ? tempLength : longest;
                
                // get the index of repeated chracter
                int repeatedIndex = myMap.find(s[end])->second;
                
                // erase the ones before and including the repeated character
                while (begin != repeatedIndex + 1) {
                    
                    myMap.erase(s[begin++]);
                }
                
                // insert a new index for the repeated character
                myMap.insert({s[end], end});
            }
        }

        // check the last substring
        int lastLength = end - begin;
        longest = lastLength > longest ? lastLength : longest;
        
        return longest;
    }
};