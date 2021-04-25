static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int s = 0, c = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                c = 0;
                if (mat[i][j] == 1)
                {
                    for (int m = 0; m < mat[0].size(); m++)
                    {
                        if (m != j && mat[i][m] == 1)
                        {
                            ++c;
                            break;
                        }
                    }
                    if (c == 0)
                    {
                        for (int m = 0; m < mat.size(); m++)
                        {
                            if (m != i && mat[m][j] == 1)
                            {
                                ++c;
                                break;
                            }
                        }
                        if (c == 0)
                            ++s;
                    }
                }
            }
        }
        return s;
    }
};
