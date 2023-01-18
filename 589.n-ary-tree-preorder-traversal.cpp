/*
 * @lc app=leetcode id=589 lang=cpp
 *
 * [589] N-ary Tree Preorder Traversal
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{

public:
    vector<int> preorder(Node *root)
    {
        vector<int> vtr;
        if (root == NULL)
            return vtr;
        tr(root,vtr);
        return vtr;
    }
    void tr(Node *root, vector<int>& vtr)
    {
        vtr.push_back(root->val);
        for (auto a : root->children)
        {
            tr(a,vtr);
        }
    }
};
// @lc code=end
