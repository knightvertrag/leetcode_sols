class Solution {
public:
    vector<int> partitionLabels(string S) {
        int possible_range = 0;
        vector<int> res;
        int starter = 0;

        for (int i = 0; i < S.size(); i++)
        {
            int last_occurence = S.find_last_of(S[i]);
            possible_range = max(possible_range, last_occurence);
            if (possible_range == i)
            {
                res.push_back(possible_range - starter + 1);
                starter = possible_range + 1;
            }
        }

        return res;
    }
};
