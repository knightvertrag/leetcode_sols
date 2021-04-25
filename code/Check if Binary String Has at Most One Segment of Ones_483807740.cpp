class Solution {
public:
    bool checkOnesSegment(string s) {
       bool onechance = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '1' && onechance)
                continue;
            else if (s[i] == '1' && !onechance)
                return false;
            else
                onechance = false;
        }
        return true;
    }
};
