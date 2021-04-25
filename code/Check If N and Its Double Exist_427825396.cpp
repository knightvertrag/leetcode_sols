class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int zero = 0;
        unordered_set<int> x;
        for (auto i : arr)
        {
            if(i != 0)
                x.insert(i);
            else
                zero++;
        }
        if(zero > 1)
            return true;
        for (int i = 0; i < arr.size(); i++)
        {
            if (x.find(arr[i] * 2) != x.end())
                return true;
        }
        return false;
    }
};
