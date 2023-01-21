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