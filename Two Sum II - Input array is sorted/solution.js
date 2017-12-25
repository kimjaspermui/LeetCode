/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {

    // initialized indices to two ends
    var low = 0;
    var high = numbers.length - 1;

    // loop until a solution has been found
    while (true) {

        // get the sum from two ends
        var sum = numbers[low] + numbers[high];

        // if the sum is equal to target, then return the indices
        if (sum == target) {

            return [low+1, high+1];
        }

        // if less than target, then increment low for higher value
        // otherwise, decrement high for lower value
        low = sum < target ? low+1 : low;
        high = sum > target ? high-1 : high;
    }

    // won't reach here since there is a solution
    return [0, 0];
};
