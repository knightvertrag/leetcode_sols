class Solution {
public:
    unordered_map<string, int> mem;
    int helper1(string s)
    {
        if(mem.find(s) != mem.end())
            return mem[s];
        if(s.size() == 0)
            return 1;
        int one=0, two=0;
        if(s[0] >= '1' && s[0] <= '9')
            one += helper1(s.substr(1));
        if(stoi(s.substr(0, 2)) >= 10 && stoi(s.substr(0, 2)) <= 26)
            two += helper1(s.substr(2));

        mem[s] = one + two;
        return one + two;
    }
    int numDecodings(string s)






