/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {

    var seen = {};

    for (var i = 0; i < nums.length; i++) {

        // check to see if this number has been seen
        if (nums[i] in seen) {

            // check if the absolute difference is less than or equal to k
            if (Math.abs(seen[nums[i]] - i) <= k) {

                return true;
            }
        }

        // add/update this number with its index
        seen[nums[i]] = i;
    }

    return false;
};
