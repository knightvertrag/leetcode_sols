class Solution {
public:
    bool isClosed(vector<vector<int>> &grid, int row, int col)
    {
        int rows = grid.size(), cols = grid[0].size();
        // Hit a boundary
        if (row < 0 || row >= rows || col < 0 || col >= cols)
        {
            return false;
        }

        // Hit water
        if (abs(grid[row][col]) == 1)
        {
            return true;
        }

        grid[row][col] = -1;
        bool upClosed = isClosed(grid, row - 1, col);
        bool downClosed = isClosed(grid, row + 1, col);
        bool leftClosed = isClosed(grid, row, col - 1);
        bool rightClosed = isClosed(grid, row, col + 1);
        return upClosed && downClosed && leftClosed && rightClosed;
    }

    int closedIsland(vector<vector<int>> &grid)
    {
        int rows = grid.size(), cols = grid[0].size(), count = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 0 && isClosed(grid, i, j))
                    count++;
            }
        }
        return count;
    }
};
