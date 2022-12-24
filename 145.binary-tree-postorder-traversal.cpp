/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    ////////////        Iterative
    vector<int> postorderTraversal(TreeNode* root) {
        stack<int> ans;
        if(!root)
            return {};
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            TreeNode* curr=stk.top();
            ans.push(curr->val);
            stk.pop();
            if(curr->left){
                stk.push(curr->left);
            }
            if(curr->right){
                stk.push(curr->right);
            }
        }
        vector<int> f;
        while(!ans.empty()){
            f.push_back(ans.top());
            ans.pop();
        }
        return f;
    }

    //////////// Recursive
    vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root)
    {
        helper(root);
        return ans;
    }
    void helper(TreeNode *node)
    {
        if (!node)
            return;
        helper(node->left);
        helper(node->right);
        ans.push_back(node->val);
    }
};
// @lc code=end
