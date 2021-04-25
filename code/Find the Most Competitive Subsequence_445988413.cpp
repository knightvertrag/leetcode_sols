class Solution {
public:
    vector<int> mostCompetitive(vector<int> &nums, int k)
    {
        vector<int> ans;
        int torem = nums.size() - k;
        for(auto a : nums)
        {
            while(ans.size() && torem && a < ans.back())
            {
                ans.pop_back();
                --torem;
            }
            ans.push_back(a);
        }
        while(torem)
        {
            ans.pop_back();
            --torem;
        }
        return ans;
    }
};
