class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> st;
        vector<int> res(T.size());
        for (int i = 0; i < T.size(); i++)
        {
            while (st.size() && T[st.top()] < T[i])
            {
                res[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
