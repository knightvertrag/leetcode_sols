class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> st;
        vector<int> res(T.size());
        for (int i = 0; i < T.size(); i++)
        {
            while (st.size() && T[st.back()] < T[i])
            {
                res[st.back()] = i - st.back();
                st.pop_back();
            }
            st.push_back(i);
        }
        return res;
    }
};
