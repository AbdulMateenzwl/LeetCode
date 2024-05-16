/*
 * @lc app=leetcode id=2331 lang=cpp
 *
 * [2331] Evaluate Boolean Binary Tree
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
class Solution {
public:
    bool evaluateTree(TreeNode* node) {
        if(node != NULL && (node->left == NULL && node->right== NULL))
            return node->val;

        if (node->val == 2) 
            return evaluateTree(node->left) or evaluateTree(node->right);
        return evaluateTree(node->left) and evaluateTree(node->right);
    }
};
// @lc code=end

