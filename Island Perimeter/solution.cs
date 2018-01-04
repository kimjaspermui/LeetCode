public class Solution {

    // 4 directions
    int[,] directions = new int[,]{{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

    // initialize the count
    int count = 0;

    private bool outOfBounds(int x, int y, int[,] grid) {

        // check the row if out of bounds
        if (x < 0 || x >= grid.GetLength(0)) {

            return true;
        }

        // check the column if out of bounds
        else if (y < 0 || y >= grid.GetLength(1)) {

            return true;
        }

        return false;
    }

    private void countSides(int x, int y, int[,] grid) {

        // non-island, just return
        if (grid[x, y] == 0) {

            return;
        }

        // left, up, right, down
        for (int i = 0; i < directions.GetLength(0); i++) {

            // get the cell with different directions
            int currX = x + directions[i, 0];
            int currY = y + directions[i, 1];

            // if out of bound or it's water, then add it to count
            if (outOfBounds(currX, currY, grid) || grid[currX, currY] == 0) {

                count++;
            }
        }
    }

    public int IslandPerimeter(int[,] grid) {

        // for loops to iterate all elements
        for (int i = 0; i < grid.GetLength(0); i++) {

            for (int j = 0; j < grid.GetLength(1); j++) {

                // if the cell is an island count the sides that are part of perimeter
                if (grid[i, j] == 1) {

                    countSides(i, j, grid);
                }
            }
        }

        // return the final count
        return count;
    }
}
