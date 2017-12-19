class Solution {
    public boolean isPalindrome(int x) {

        // if negative then it shouldn't be palindrome
        if (x < 0) {

            return false;
        }

        // this will hold the count of digits
        int count = 0;

        // make a copy of x
        int num = x;

        // this will store the first half of number in reverse
        int revHalf = 0;

        // get the number of digits
        while (num != 0) {

            num /= 10;
            count++;
        }

        // get another copy of x
        num = x;

        // construct the reverse first half
        for (int i = 0; i < count / 2; i++) {

            revHalf = revHalf * 10 + num % 10;
            num /= 10;
        }

        // check if it's odd, if it is take out the middle
        if (count % 2 != 0) {

            num /= 10;
        }

        // check the second half if it matches the reversed first half
        for (int i = 0; i < count / 2; i++) {

            // if reverse half becomes 0 first then return false
            // short of digits, cause leading digit won't be 0
            if (revHalf == 0) {

                return false;
            }

            // check the current digit of both, then update them
            if (revHalf % 10 == num % 10) {

                revHalf /= 10;
                num /= 10;
            }

            // if not match, return false
            else {

                return false;
            }
        }

        // return true since it's palindrome
        return true;
    }
}
