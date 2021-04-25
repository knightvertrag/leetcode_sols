static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    int numOfSubarrays(vector<int> &arr)
    {
        int ansFac = 1000000007;
        long long int temp[2] = {1, 0};
        long long int result = 0, val = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            val = ((val + arr[i]) % 2);
            temp[val]++;
        }
        result = (temp[0] * temp[1]) % ansFac;
        return result;
    }
};

