/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {

    // this will store the value to return
    value = 0;

    // map to store the corresponding values of the roman characters
    myMap = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
             'C': 100, 'D': 500, 'M': 1000};

    // for loop to iterate all roman characters
    for (i = 0; i < s.length; i++) {

        // get the value of the current character, then
        // initialized value of next character
        first = myMap[s[i]];
        second = 0;

        // if i it's not the last character, get the value
        // of the next character
        if (i != s.length-1) {

            second = myMap[s[i+1]];
        }

        // if the value of next character is greater than the current
        // character, update value with the difference, then increment i
        if (second > first) {

            value += second - first;
            i++;
        }

        // otherwise, just add the value of the current character to value
        else {

            value += first;
        }
    }

    return value;
};
