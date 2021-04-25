class Solution {
public:
    int countServers(vector<vector<int>> &grid)
    {
        int count = 0;
        if (grid.empty())
            return 0;
        int N = grid.size(), M = grid[0].size();
        queue<pair<int, int>> q;
        bool pad = false;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (grid[i][j] == 1)
                    q.push({i, j});
            }
        }
        while (!q.empty())
        {
            pad = false;
            int s1 = q.front().first;
            int s2 = q.front().second;
            q.pop();
            for (int j = 0; j < M; j++)
            {
                if (j != s2 && grid[s1][j] == 1)
                    if (!pad)
                    {
                        pad = true;
                        count++;
                        break;
                    }
                    else
                        continue;
            }
            for (int i = 0; i < N; i++)
            {
                if (i != s1 && grid[i][s2] == 1)
                {
                    if (pad == false)
                    {
                        pad = true;
                        count++;
                        break;
                    }
                }
                else
                    continue;
            }
        }
        return count;
    }
};
