class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        res.push_back(s[0]);
        for (int i = 1; i < s.size(); i++)
        {
            if (abs(int(res.back() - s[i])) == 0)
            {
                res.pop_back();
            }
            else
                res.push_back(s[i]);
        }
        return res;
    }
};
