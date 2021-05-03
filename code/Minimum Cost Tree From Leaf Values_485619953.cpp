class Solution {
public:
    int mctFromLeafValues(vector<int> &arr)
    {
        int ans = 0;
        while (arr.size() > 1)
        {
            int miniIndex = min_element(arr.begin(), arr.end()) - arr.begin();
            int next_bigger_left = INT_MAX;
            if (miniIndex - 1 >= 0)
                next_bigger_left = arr[miniIndex - 1];
            int next_bigger_right = INT_MAX;
            if (miniIndex + 1 < arr.size())
                next_bigger_right = arr[miniIndex + 1];
            ans += arr[miniIndex] * min(next_bigger_left, next_bigger_right);
            arr.erase(arr.begin() + miniIndex);
        }

        return ans;
    }
};
