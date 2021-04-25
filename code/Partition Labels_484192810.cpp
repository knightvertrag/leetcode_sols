class Solution {
public:
    vector<int> partitionLabels(string S) {
        int possible_range = 0;
        vector<int> res;
        int starter = 0;
        while (possible_range != S.size())
        {
            for (int i = starter; i <= possible_range; i++)
            {
                int last_occurence = S.find_last_of(S[i]);
                if (last_occurence > possible_range)
                {
                    possible_range = last_occurence;
                }
                else
                    continue;
            }
            res.push_back(possible_range - starter + 1);
            starter = ++possible_range;
        }
        return res;
    }
};
