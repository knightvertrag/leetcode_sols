static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        if (nums.size() == 1 && nums[0] > 0)
            return 1;
        else if (nums.size() == 1)
            return -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int l = nums.size() - i;
            if (i == 0 && (l <= nums[i]))
                return l;
            else if (i == nums.size() - 1 && nums[i] >= 1 && nums[i - 1] < 1)
                return 1;
            else if (i > 0 && i < nums.size() - 1 && l > nums[i - 1] && l <= nums[i])
                return l;
        }
        return -1;
    }
};
