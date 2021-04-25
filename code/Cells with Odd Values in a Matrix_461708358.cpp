class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        unordered_map<int, int> mpc, mpr;
        int oddcnt = 0;
        int N = indices.size(), M = indices[0].size();
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j += 2)
            {
                mpr[indices[i][j]]++;
                mpc[indices[i][j + 1]]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = mpr[i] + mpc[j];
                if (x % 2 != 0)
                    oddcnt++;
            }
        }
        return oddcnt;
        
    }
};
