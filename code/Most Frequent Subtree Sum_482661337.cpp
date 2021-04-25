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
    int maxi = INT_MIN;
    map<int, int> freq;
    int helper(TreeNode *node)
    {
        if (node == NULL)
            return 0;
        int sum = node->val;
        sum += helper(node->right) + helper(node->left);
        freq[sum]++;
        maxi = max(maxi, freq[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        if(root == NULL)
            return {};
        vector<int> res;
        helper(root);
        for(auto f : freq)
        {
            if(f.second == maxi)
                res.push_back(f.first);
        }
        return res;
    }
};
