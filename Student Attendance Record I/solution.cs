public class Solution {
    public bool CheckRecord(string s) {

        // this will keep track of the count of A and L
        int countA = 0;
        int countL = 0;

        // iterate all attendance in S
        foreach (char c in s) {

            // increment count for L if it is L
            if (c == 'L') {

                countL++;
            }

            // otherwise, A or P
            else {

                // increment count for A if it is A
                // no need to do anything for P
                if (c == 'A') {

                    countA++;
                }

                // reset L counting if not L
                countL = 0;
            }

            // not rewarded conditions
            if (countA > 1 || countL > 2) {

                return false;
            }
        }

        // rewarded as the student met the condition
        return true;
    }
}
