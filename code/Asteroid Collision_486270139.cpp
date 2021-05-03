class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        st.push(ast[0]);
        int i = 1;
        while (i < ast.size())
        {
            if (!st.empty() && st.top() > 0 && ast[i] < 0 && i < ast.size())
            {

                if (st.top() > abs(ast[i]))
                    i++;
                else if (st.top() == abs(ast[i]))
                {
                    st.pop();
                    i++;
                }
                else
                    st.pop();
            }
            else
            {
                st.push(ast[i]);
                i++;
            }
        }
        ast.clear();
        while (!st.empty())
        {
            ast.insert(ast.begin(), st.top());
            st.pop();
        }
        return ast;
    }
};
