class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return 1;
        vector<int>::iterator it;
        int x = *nums.begin();
        for (it = nums.begin() + 1; it != nums.end();)
        {
            if (*it == x)
                nums.erase(it);
            else
            {
                x = *it;
                it++;
            }
                
        }
        return nums.size();
    }
};
