class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>> ans(2, vector<int>(colsum.size(), 0));
        vector<vector<int>> defans;
        int mup = 0, mlow = 0, ucp = upper, lcp = lower;
        for (int j = 0; j < colsum.size(); j++)
        {
            if (upper <= 0 && lower <= 0)
                return defans;
            if (colsum[j] == 2)
            {
                ans[0][j] = 1;
                ans[1][j] = 1;
                --upper;
                --lower;
                ++mup;
                ++mlow;
            }
            else if (colsum[j] == 0)
                continue;
        }
        for (int j = 0; j < colsum.size(); j++)
        {
            if(colsum[j] != 1)
                continue;
            if (upper <= 0 && lower <= 0)
                return defans;
            if (colsum[j] == 1)
            {
                if (upper > 0)
                {
                    ans[0][j] = 1;
                    --upper;
                    ++mup;
                }
                else if (lower > 0)
                {
                    ans[1][j] = 1;
                    --lower;
                    ++mlow;
                }
            }
        }
        if (mup == ucp && mlow == lcp)
            return ans;
        return defans;
    }
};
