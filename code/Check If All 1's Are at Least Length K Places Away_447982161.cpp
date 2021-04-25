class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) 
    {
        int flag = 0;
        for (int i = 0, z = -1; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                if(z == -1)
                    z = i;
                else
                {
                    if(i - z - 1 < k)
                        return false;
                    z = i;
                }
            }
        }
        return true;
    }
};
