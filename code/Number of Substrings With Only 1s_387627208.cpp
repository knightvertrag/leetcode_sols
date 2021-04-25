static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution {
public:
    int numSub(string s)
    {
        s.append("0");
        vector<long long int> arr;
        long long int count = 0, sum = 0;
        for (auto i : s)
        {
            if (i == '1')
            {
                count++;
                continue;
            }
            if (count != 0)
                arr.push_back(count);
            count = 0;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
                continue;
            sum = sum + arr[i] * (arr[i] + 1) / 2;
        }
        sum = sum % 1000000007;
        return sum;
    }
};
