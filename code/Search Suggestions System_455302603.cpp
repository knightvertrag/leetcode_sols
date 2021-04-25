class Solution {
public:
vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        sort(products.begin(), products.end());
        vector<vector<string>> suggestions;
        int l = 0, r = products.size() - 1;
        for (int i = 0; i < searchWord.size(); i++)
        {
            suggestions.push_back({});
            while (l <= r && products[l][i] < searchWord[i])
                l++;
            while (l <= r && products[r][i] > searchWord[i])
                r--;
            for (int j = 0; j <= 2 && l + j <= r; j++)
            {
                suggestions[suggestions.size() - 1].push_back(products[l + j]);
            }
        }
        return suggestions;
    }
};
