bool compare(vector<int> &a, vector<int> &b)
{
    return ((a[0] * a[0] + a[1] * a[1]) > (b[0] * b[0] + b[1] * b[1]));
}

class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> res;
        priority_queue<vector<int>, vector<vector<int>>, decltype(&compare)> pq(compare);
        for (auto v : points)
        {
            pq.push(v);
        }
        while (k--)
        {
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};
