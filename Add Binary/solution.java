class Solution {

    // this function will convert a given bit to char
    private char toChar(int num) {

        if (num == 1) {

            return '1';
        }

        else {

            return '0';
        }
    }

    public String addBinary(String a, String b) {

        // carry start from 0
        char carry = '0';

        // this will store the bits in reverse
        Stack<Character> myStack = new Stack<Character>();

        // start indices from the ends
        int aIndex = a.length() - 1;
        int bIndex = b.length() - 1;

        // while not both are less than 0, then keep adding
        while (aIndex >= 0 || bIndex >= 0) {

            // get both bits or 0 if out of bounds
            char aBit = aIndex >= 0 ? a.charAt(aIndex--) : '0';
            char bBit = bIndex >= 0 ? b.charAt(bIndex--) : '0';

            // add them including the carry
            int result = (aBit + bBit + carry) - 3 * '0';

            // get the LSB as the bit in char
            myStack.push(toChar(result & 1));

            // update the carry by getting the second bit
            carry = toChar(result >> 1 & 1);
        }

        // if there is more carry then add it to stack
        if (carry == '1') {

            myStack.push('1');
        }

        // if at this point, the stack is empty, then just return 0 (both are empty)
        if (myStack.empty()) {

            return "0";
        }

        // string builder to build the string
        StringBuilder mySum = new StringBuilder(myStack.size());

        // while the stack is not empty, keep popping to string builder
        while (!myStack.empty()) {

            mySum.append(myStack.pop());
        }

        return new String(mySum);
    }
}
