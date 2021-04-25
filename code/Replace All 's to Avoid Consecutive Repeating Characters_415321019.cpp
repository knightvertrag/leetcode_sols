class Solution
{
public:
    string modifyString(string s)
    {
        string tmp = "";
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                int j, flag;
                for (j = 0; j < 26; j++)
                {
                    flag = 1;
                    if (i + 1 < n && ((char)('a' + j) == s[i + 1]))
                        flag = 0;
                    if (flag && i - 1 >= 0 && ((char)('a' + j) == s[i - 1]))
                        flag = 0;
                    if (flag)
                    {
                        s[i] = (char)('a' + j);
                        break;
                    }
                }
            }
        }
        return s;
    }
};
