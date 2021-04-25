class Solution {
public:
    string largestMerge(string word1, string word2) {
        int i = 0, j = 0;
        string res = "";
        const int len1 = word1.size(), len2 = word2.size();
        while (i < len1 && j < len2)
        {
            char &c1 = word1[i];
            char &c2 = word2[j];
            if (c1 > c2)
            {
                res += c1;
                i++;
            }
            else if (c1 < c2)
            {
                res += c2;
                j++;
            }
            else
            {
                int a = i, b = j;
                while (a < len1 && b < len2)
                {
                    if (word1[a] == word2[b])
                    {
                        a++;
                        b++;
                    }
                    else if (word1[a] < word2[b])
                    {
                        res += word2[j];
                        j++;
                        break;
                    }
                    else
                    {
                        res += word1[i];
                        i++;
                        break;
                    }
                }
                if (a == len1)
                {
                    res += word2[j];
                    j++;
                }
                else if (b == len2)
                {
                    res += word1[i];
                    i++;
                }
            }
        }
        while (i < len1)
            res += word1[i++];
        while (j < len2)
            res += word2[j++];

        return res;
    }

};
