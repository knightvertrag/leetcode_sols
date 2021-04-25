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
    void helper(TreeNode* node) {
        if(node == NULL)
            return;
        helper(node->left);
        res.push_back(node->val);
        helper(node->right);
        return;
    }
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
        return res;
    }
};
