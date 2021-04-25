class Solution {
public:
   int mem[101][101];
    int uniquePath(int i, int j, int n, int m)
    {
        if (i == n && j == m)
            return 1;
        if (i > n || j > m)
            return 0;
        if (mem[i][j] != -1)
            return mem[i][j];
        return mem[i][j] = uniquePath(i + 1, j, n, m) + uniquePath(i, j + 1, n, m);
    }
    int uniquePaths(int m, int n)
    {
        memset(mem, -1, sizeof(mem));
        return uniquePath(1, 1, n, m);
    }
};
