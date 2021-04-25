class Solution {
public:
    void helper(vector<char>&s , int f, int b)
    {
        if(f >= b)
            return;
        char temp;
        temp = s[f];
        s[f] = s[b];
        s[b] = temp;
        f++;
        b--;
        helper(s, f, b);
    }
    void reverseString(vector<char> &s)
    {
        helper(s, 0, s.size() - 1);
    }
};
