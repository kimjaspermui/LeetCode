class NumArray {

    int sums[];

    public NumArray(int[] nums) {

        // initialize the array with nums' length + 1
        sums = new int[nums.length + 1];

        // keep track of current sum
        int currSum = 0;

        // fill up the sums (sum up to this index), move index to right by 1
        // leave first element to be 0 for difference
        for (int i = 0; i < nums.length; i++) {

            currSum += nums[i];
            sums[i+1] = currSum;
        }
    }

    public int sumRange(int i, int j) {

        // get sum up to j, minus sum up to i-1
        return sums[j+1] - sums[i];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
