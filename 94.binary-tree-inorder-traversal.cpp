/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
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
class Solution
{
public:
    vector<int> vtr;
    vector<int> inorderTraversal(TreeNode* root) {
        d(root);
        return vtr;
    }
    void d(TreeNode* n){
        if(!n) return ;
        d(n->left);
        vtr.push_back(n->val);
        d(n->right);
    }
};
// @lc code=end
