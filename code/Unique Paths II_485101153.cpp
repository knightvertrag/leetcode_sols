class Solution {
public:
    int mem[100][100];
    int uniquePath(vector<vector<int>> &obstacleGrid, int i, int j)
    {
        if (i >= obstacleGrid.size() || j >= obstacleGrid[0].size())
            return 0;
        if (obstacleGrid[i][j] == 1)
            return 0;
        if (i == obstacleGrid.size() - 1 && j == obstacleGrid[0].size() - 1)
            return 1;
        if (mem[i][j] != -1)
            return mem[i][j];
        return mem[i][j] = uniquePath(obstacleGrid, i, j + 1) + uniquePath(obstacleGrid, i + 1, j);
    }
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        memset(mem, -1, sizeof(mem));
        return uniquePath(obstacleGrid, 0, 0);
    }
};
