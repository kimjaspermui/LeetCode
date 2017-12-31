class Solution {
    public char findTheDifference(String s, String t) {

        // this will reveal the extra characters
        int result = 0;

        // xor characters of s
        for (int i = 0; i < s.length(); i++) {

            result ^= s.charAt(i);
        }

        // xor characters of t
        for (int i = 0; i < t.length(); i++) {

            result ^= t.charAt(i);
        }

        // the remaining bits are for the extra characters
        // since xor is commutative
        return (char) result;
    }
}
