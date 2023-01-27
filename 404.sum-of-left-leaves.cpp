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
    int sumOfLeftLeaves(TreeNode *root)
    {
        int sum = 0;
        queue<TreeNode *> qu;
        qu.push(root);
        while (qu.size() != 0)
        {
            TreeNode *node = qu.front();
            qu.pop();
            if (node->right != NULL)
                qu.push(node->right);
            if (node->left != NULL)
            {
                if (node->left->left == NULL && node->left->right == NULL)
                    sum += node->left->val;
                else
                    qu.push(node->left);
            }
        }
        return sum;
    }
};