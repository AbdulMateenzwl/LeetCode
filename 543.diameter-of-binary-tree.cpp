/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    int ans = 0;
    int diameterOfBinaryTree(TreeNode *root)
    {
        height(root);
        return ans;
    }
    int height(TreeNode *node)
    {
        if (node==NULL)
            return 0;
        int l=height(node->right);
        int r=height(node->left);
        ans = max( l+r, ans);
        return 1 + max(l,r);
    }
};
// @lc code=end
