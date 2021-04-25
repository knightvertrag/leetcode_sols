class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        unordered_set<int> s;
        for (auto i : arr)
            s.insert(i);
        int x = 1;
        while (v.size() <= k)
        {
            if (s.find(x) != s.end())
            {
                x++;
                continue;
            }
            else
            {
                v.push_back(x++);
            }
        }
        return v[k-1];
    }
};
