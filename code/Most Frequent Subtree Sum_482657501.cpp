/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   unordered_map<TreeNode *, int> mem;
    map<int, int, greater<int>> freq;
    multimap<int,int, greater<int>> sort(map<int, int, greater<int>> &M)
    {
        multimap<int, int, greater<int>> MM;
        for (auto &it : M)
        {
            MM.insert({it.second, it.first});
        }
        return MM;
    }
    int helper(TreeNode *node)
    {
        if (node == NULL)
            return 0;
        if (mem.find(node) != mem.end())
            return mem[node];
        int sum = node->val;
        sum += helper(node->right) + helper(node->left);
        freq[sum]++;
        mem[node] = sum;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        vector<int> res;
        helper(root);
        multimap<int,int, greater<int>> ans;
        ans = sort(freq);
        //cout << freq[6];
        pair<int,int> max_frq = *ans.begin();
        for(auto f : ans)
        {
            cout << f.first << "-" << f.second <<"\n";
            if(f.first == max_frq.first)
                res.push_back(f.second);
        }
        return res;
    }
};
