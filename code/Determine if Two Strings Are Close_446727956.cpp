class Solution {
public:
    bool closeStrings(string word1, string word2)
    {
        if(word1.size() != word2.size())
            return false;
        unordered_map<char, int> map1, map2;
        for(int i = 0; i < word1.size(); ++i)
        {
            map1[word1[i]]++;
            map2[word2[i]]++;
        }
        unordered_multiset<int> stw, stf;
        for(auto i : map2)
        {
            stf.insert(i.second);
            stw.insert(i.first);
        }
        for(auto i : map1)
        {
            if(stf.empty() || stw.find(i.first) == stw.end())
                return false;
            if(stf.find(i.second) != stf.end())            
                stf.erase(stf.find(i.second));
            else
                return false;
        }
        if(stf.empty())
            return true;
        return false;
    }
};
