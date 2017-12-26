class Solution {
    public int rob(int[] nums) {

        // this will keep track rob value if include or exclude previous
        int include = 0;
        int exclude = 0;

        // iterate the rest of the elements
        for (int i = 0; i < nums.length; i++) {

            // update include and exclude
            int tempInclude = include;
            include = exclude + nums[i];
            exclude = Math.max(tempInclude, exclude);
        }

        return Math.max(include, exclude);
    }
}
