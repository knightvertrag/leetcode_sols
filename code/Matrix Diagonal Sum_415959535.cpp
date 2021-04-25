static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int side = mat.size();
        int sum = 0;
        for (int i = 0; i < side; i++)
        {
            sum = sum + mat[i][side - 1 - i] + mat[i][i];
        }
        if (side % 2 != 0)
            sum = sum - mat[(side - 1) / 2][(side - 1) / 2];
        return sum;
    }
};
