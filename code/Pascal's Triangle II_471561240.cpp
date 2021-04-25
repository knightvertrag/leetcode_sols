class Solution {
public:
    vector<int> res;
    void helper(vector<int>v , int rowIndex)
    {
        if(rowIndex == 0)
        {
            res = v;
            return;
        }
        vector<int> temp;
        temp.push_back(0);
        for (int i = 0; i < v.size() - 1; i++)
        {
            temp.push_back(v[i] + v[i + 1]);
        }
        temp.push_back(0);
        rowIndex--;
        helper(temp, rowIndex);
    }
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans{0, 1, 0};
        helper(ans, rowIndex);
        res.pop_back();
        res.erase(res.begin());
        return res;
    }
};
