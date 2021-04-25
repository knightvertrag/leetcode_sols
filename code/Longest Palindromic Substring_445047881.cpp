class Solution {
public:
    string substr(string s, int low, int high)
    {
        string ans;
        for (int i = low; i <= high; i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
    string longestPalindrome(string s)
    {
        int maxlength = 1, start = 0, low, high;
        for (int i = 1; i < s.size(); i++)
        {
            low = i - 1;
            high = i;
            while (low >= 0 && high < s.size() && s[low] == s[high])
            {
                if (high - low + 1 > maxlength)
                {
                    start = low;
                    maxlength = high - low + 1;
                }
                --low;
                ++high;
            }

            low = i - 1;
            high = i + 1;
            while (low >= 0 && high < s.size() && s[low] == s[high])
            {
                if (high - low + 1 > maxlength)
                {
                    start = low;
                    maxlength = high - low + 1;
                }
                --low;
                ++high;
            }
        }
        return substr(s, start, start + maxlength - 1);
    }
};
