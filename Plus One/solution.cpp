class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        // initialize carry to 1 to plus 1
        int carry = 1;

        // start from the end
        for (int i = digits.size() - 1; i >= 0; i--) {

            // get the sum by adding carry
            int sum = digits[i] + carry;

            // update the digit by getting the digit
            digits[i] = sum % 10;

            // update the carry
            carry = sum / 10;
        }

        // if there is carry at the end, prepend 1
        if (carry) {

            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};
