static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        unordered_set<int> valset;
        for (int &i : arr)
        {
            if (valset.find(i * 2) != valset.end())
            {
                return true;
            }
            else if ((i % 2 == 0) && (valset.find(i / 2) != valset.end()))
            {
                return true;
            }
            valset.insert(i);
        }
        return false;
    }
};
