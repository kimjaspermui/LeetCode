class Solution {
public:

    // this function will count the sides of this land
    int countSide(vector<vector<int>>& grid, int x, int y) {
        
        // initialized to 4, assume no land surround
        int count = 4;
        
        // case for check left
        if (x - 1 >= 0) {

            count -= grid[x - 1][y] == 1 ? 1 : 0;
        }
        
        // case for check right
        if (x + 1 < grid.size()) {

            count -= grid[x + 1][y] == 1 ? 1 : 0;
        }
        
        // case for check up
        if (y - 1 >= 0) {

            count -= grid[x][y - 1] == 1 ? 1 : 0;
        }
        
        // case for check down
        if (y + 1 < grid[x].size()) {

            count -= grid[x][y + 1] == 1 ? 1 : 0;
        }
        
        return count;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        // this will keep track of the total count of the sides
        int totalCount = 0;
        
        // for loops to check all lands
        for (int i = 0; i < grid.size(); i++) {
            
            for (int j = 0; j < grid[i].size(); j++) {
                
                // only when it is a land
                if (grid[i][j] == 1) {
                    
                    totalCount += countSide(grid, i, j);
                }
            }
        }
        
        return totalCount;
    }
};