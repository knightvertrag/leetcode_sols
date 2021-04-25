class Solution
{
public:
    string modifyString(string s)
    {
        string alpha = "abc";
        if (s.size() == 1)
        {
            if (s[0] == '?')
            {
                s[0] = 'a';
                return s;
            }
            return s;
        }
        if (s[0] == '?')
        {
            for (auto c : alpha)
            {
                if (c != s[1])
                {
                    s[0] = c;
                }
            }
        }
        for (int i = 0; i < s.size() - 2; i++)
        {
            char curr, middle, next;
            curr = s[i];
            middle = s[i + 1];
            next = s[i + 2];
            if (middle == '?')
            {
                for (auto c : alpha)
                {
                    if (c != curr && c != next)
                    {
                        s[i + 1] = c;
                    }
                }
            }
        }
        if (s[s.size() - 1] == '?')
        {
            for (auto c : alpha)
            {
                if (c != s[s.size() - 2])
                {
                    s[s.size() - 1] = c;
                }
            }
        }
        return s;
    }
};
