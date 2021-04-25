class Solution {
public:
    string largestMerge(string word1, string word2) {
        const int size1 = word1.length();
        const int size2 = word2.length();

        string merge;
        int i = 0, j = 0;

        while (merge.length() != (size1 + size2))
        {
            if (word1.compare(i, size1 - i, word2, j, size2 - j) > 0)
                merge += word1[i++];
            else
                merge += word2[j++];
        }

        return merge + word1.substr(i) + word2.substr(j);
    }

};
