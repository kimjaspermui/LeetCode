/* The guess API is defined in the parent class GuessGame.
   @param num, your guess
   @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
      int guess(int num); */

public class Solution extends GuessGame {
    public int guessNumber(int n) {

        // two ends of the range of guesses
        int low = 1;
        int high = n;

        // keep looping until guess right
        while (true) {

            // get the middle, and see its result
            int guess = (high - low) / 2 + low;
            int result = guess(guess);

            // if it is 0, then guessed right
            if (result == 0) {

                return guess;
            }

            // if it is 1, make low higher
            else if (result == 1) {

                low = guess + 1;
            }

            // otherwise, make high lower
            else {

                high = guess - 1;
            }
        }
    }
}
