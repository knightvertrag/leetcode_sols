class Solution {
public:
    int maxOperations(vector<int> &nums, int k)
    {
        unordered_multiset<int> st;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.find(k - nums[i]) != st.end())
            {
                ans++;
                st.erase(st.find(k - nums[i]));
            }
            else if(nums[i] <= k)
                st.insert(nums[i]);
        }
        return ans;
    }
};
