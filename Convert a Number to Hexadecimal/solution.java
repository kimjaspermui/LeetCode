class Solution {
    public String toHex(int num) {

        // edge case, if 0 then just return 0 as the string
        if (num == 0) {

            return "0";
        }

        StringBuilder myHex = new StringBuilder();

        // iterate 8 times for 8 groups
        for (int i = 0; i < 8; i++) {

            // get the value of the right most 4 bits
            int currValue = num & 15;
            num = num >> 4;

            // get characters 0-9
            if (currValue < 10) {

                myHex.append((char) ('0' + currValue));
            }

            // get characters a-f
            else {

                myHex.append((char) ('a' + (currValue - 10)));
            }
        }

        // reverse it then get the non-zero start index
        myHex = myHex.reverse();
        int start = 0;
        while (myHex.charAt(start) == '0') {

            start++;
        }

        return myHex.substring(start);
    }
}
