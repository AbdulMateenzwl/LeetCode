/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    ////////   Iterative
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)
            return ans;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode* curr=stk.top();
            ans.push_back(curr->val);
            stk.pop();
            if(curr->right){
                stk.push(curr->right);
            }
            if(curr->left){
                stk.push(curr->left);
            }
        }
        return ans;
    }

    /////////////// REcursive
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode *root)
    {
        helper(root);
        return ans;
    }
    void helper(TreeNode *node)
    {
        if (!node)
            return;
        ans.push_back(node->val);
        helper(node->left);
        helper(node->right);
    }
};
// @lc code=end
