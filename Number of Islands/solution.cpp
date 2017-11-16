class Solution {
public:
    
    void markVisited(vector<vector<char>>& grid, int x, int y) {
        
        // set this coordinate as not island
        grid[x][y] = '0';
        
        // create all possible directions
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        // for loop to iterate all directions
        for (int i = 0; i < directions.size(); i++) {
            
            // get the direction and the new values of x and y
            pair<int, int> currDir = directions[i];
            int newX = x + currDir.first;
            int newY = y + currDir.second;
            
            // if x and y is within the bound check it
            if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[x].size()) {
            
                // if it's an neighbor island mark it
                if (grid[newX][newY] == '1') {
                    
                    markVisited(grid, newX, newY);
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        // initialize the count to 0
        int numIslands = 0;
        
        // for loop to iterate all elements
        for (int x = 0; x < grid.size(); x++) {
            
            for (int y = 0; y < grid[x].size(); y++) {

                // if we found an island then mark it along with its neighbors
                if (grid[x][y] == '1') {

                    numIslands++;
                    markVisited(grid, x, y);
                }
            }
        }
        
        return numIslands;
    }
};