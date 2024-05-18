/*
 * @lc app=leetcode id=979 lang=cpp
 *
 * [979] Distribute Coins in Binary Tree
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
    int moves=0;
    int distributeCoins(TreeNode* root,TreeNode* parent=nullptr) {
        if(root==nullptr){
            return 0;
        }

        distributeCoins(root->left,root);
        distributeCoins(root->right,root);

        int x = root->val-1;
        if(parent)
            parent->val+=x;
        moves+=abs(x);

        return moves;
    }
};
// @lc code=end

