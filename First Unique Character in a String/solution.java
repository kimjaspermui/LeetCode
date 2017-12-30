class Solution {
    public int firstUniqChar(String s) {

        // this will store the characters frequencies
        int[] freq = new int[26];

        // get the frequencies of each character in s
        for (int i = 0; i < s.length(); i++) {

            freq[s.charAt(i) - 'a']++;
        }

        // loop through the characters again to get the one appear once
        for (int i = 0; i < s.length(); i++) {

            // if this character appeared only once then return this index
            if (freq[s.charAt(i) - 'a'] == 1) {

                return i;
            }
        }

        // -1 for not found
        return -1;
    }
}
