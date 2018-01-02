class Solution {

    // this will return true if given character is upper case
    private boolean isUpperCase(char c) {

        return 'A' <= c && c <= 'Z';
    }

    public boolean detectCapitalUse(String word) {

        // edge case, less than length 2 return true
        if (word.length() < 2) {

            return true;
        }

        // get the case of first character
        boolean isCapital = isUpperCase(word.charAt(0));

        // start from second character, allCapital false by default
        int currIndex = 1;
        boolean allCapital = false;

        // determine allCapital from second character if first is capital
        if (isCapital) {

            allCapital = isUpperCase(word.charAt(1));
        }

        // check the remaining characters
        while (currIndex < word.length()) {

            // all capital but it is not capital
            if (allCapital && !isUpperCase(word.charAt(currIndex))) {

                return false;
            }

            // not all capital but is capital
            else if (!allCapital && isUpperCase(word.charAt(currIndex))) {

                return false;
            }

            currIndex++;
        }

        return true;
    }
}
