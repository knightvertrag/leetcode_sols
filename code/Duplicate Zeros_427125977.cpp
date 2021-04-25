class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        vector<int> b;
        int n = arr.size();
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                b.push_back(arr[i]);
            }
            else if (arr[i] == 0)
            {
                b.push_back(0);
                b.push_back(0);
                arr.pop_back();
            }
        }
        if(n < b.size())
            b.pop_back();
        arr.clear();
        arr = b;
    }
};
