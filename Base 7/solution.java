class Solution {
    public String convertToBase7(int num) {

        // edge case, num is 0 return string with 0
        if (num == 0) {

            return "0";
        }

        // this will store the base 7 representation in reverse
        Stack<Character> myStack = new Stack<Character>();

        // determine if it is negative
        boolean isNegative = false;
        if (num < 0) {

            isNegative = true;
        }

        // make num positive
        num = Math.abs(num);

        // keep looping until num is 0
        while (num != 0) {

            // get the remainder and update num
            int rem = num % 7;
            num = num / 7;

            // push the remainder to stack
            myStack.push((char) ('0' + rem));
        }

        // push the negative sign to the stack if it is negative
        if (isNegative) {

            myStack.push('-');
        }

        // string builder to build the base 7 string
        StringBuilder myBuilder = new StringBuilder(myStack.size());

        // keep looping until stack is not empty, keep looping
        while (!myStack.empty()) {

            myBuilder.append(myStack.pop());
        }

        return myBuilder.toString();
    }
}
