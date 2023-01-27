class Solution {
public:
    int maxDepth(TreeNode* root){
        // Solution 1
        if(root==NULL)
            return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;


        // Solution 2
        if (root == NULL)
            return 0;
        queue<TreeNode *> queueNode;
        queueNode.push(root);
        int depth=0;
        while (!queueNode.empty())
        {
            int n = queueNode.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *current = queueNode.front();
                queueNode.pop();
                if (current->left != NULL)
                    queueNode.push(current->left);
                if (current->right != NULL)
                    queueNode.push(current->right);
            }
            depth++;
        }
        return depth;
    } 
};