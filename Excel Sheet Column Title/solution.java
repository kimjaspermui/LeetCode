class Solution {
    public String convertToTitle(int n) {

        // sample: ABCD = (((1) * 26 + 2) * 26 + 3) * 26 + 4

        // this will add characters from the end
        StringBuilder myStringBuilder = new StringBuilder();

        // keep looping until there's no more characters
        while (n > 0) {

            // get the character from the end
            myStringBuilder.append((char) ('A' + --n % 26));

            // divide by 26 to get to the next character
            n /= 26;
        }

        // return the reverse of the current string
        return myStringBuilder.reverse().toString();
    }
}
