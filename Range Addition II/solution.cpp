class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {

        // return the size of matrix if there is no operations
        if (ops.size() == 0) {

            return m * n;
        }

        // will keep track the minimum of row and column
        int minRow = INT_MAX;
        int minCol = INT_MAX;

        // iterate through all of the operations
        for (vector<int> op : ops) {

            // update the min of row or col if necessary
            minRow = min(minRow, op[0]);
            minCol = min(minCol, op[1]);
        }

        // get the size for the final min row and col
        return minRow * minCol;
    }
};
