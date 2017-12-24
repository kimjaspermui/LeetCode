/**
 * @param {string} s
 * @return {boolean}
 */

// this function will check the validity of the character.
// If it is invalid, it will return a space
function checkChar(c) {

    c = c.toLowerCase();
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')) {

        return c;
    }

    return ' ';
}

var isPalindrome = function(s) {

    // this will keep track of the indices at two ends
    var low = 0;
    var high = s.length - 1;

    // while low index is lower, keep looping
    while (low < high) {

        // check and convert the characters
        var lowChar = checkChar(s[low]);
        var highChar = checkChar(s[high]);

        // if it's a space then increment low
        if (lowChar == ' ') {

            low++;
            continue;
        }

        // same with high but decrement
        else if (highChar == ' ') {

            high--;
            continue;
        }

        // if they are not equal then return false at this point
        if (lowChar != highChar) {

            return false;
        }

        // update the indices
        low++;
        high--;
    }

    return true;
};
