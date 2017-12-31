/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {

    // this will store all resulted strings
    myStrings = new Array(n)

    // for loop to iterate from 1 to n
    for (i = 1; i <= n; i++) {

        // divides both 3 and 5 then store FizzBuzz
        if (i % 3 == 0 && i % 5 == 0) {

            myStrings[i-1] = "FizzBuzz"
        }

        // divides 3 only then store Fizz
        else if (i % 3 == 0) {

            myStrings[i-1] = "Fizz"
        }

        // divides 5 only then store Buzz
        else if (i % 5 == 0) {

            myStrings[i-1] = "Buzz"
        }

        // otherwise, just store the number
        else {

            myStrings[i-1] = i.toString()
        }
    }

    return myStrings
};
