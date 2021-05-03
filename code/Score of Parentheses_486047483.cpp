class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                stk.push_back(0);
            }
            else // s[i] == ')'
            {
                if (stk.back() == 0)
                {
                    stk.pop_back();
                    stk.push_back(1);
                }
                else
                {
                    int score = 0;
                    while (stk.back() != 0)
                    {
                        score += stk.back();
                        stk.pop_back();
                    }
                    stk.pop_back();
                    stk.push_back(score * 2);
                }
            }
        }
        int score = 0;
        for (auto i : stk)
            score += i;
        return score;
    }
};
