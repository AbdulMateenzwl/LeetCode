/*
 * @lc app=leetcode id=1325 lang=cpp
 *
 * [1325] Delete Leaves With a Given Value
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
    TreeNode* removeLeafNodes(TreeNode* node, int target) {
        if(node==nullptr) return nullptr;

        node->left = removeLeafNodes(node->left,target);
        node->right = removeLeafNodes(node->right,target);
        if(node->val == target && node->left == nullptr && node->right == nullptr){
            return nullptr;
        }

        return node;
    }
};
// @lc code=end

