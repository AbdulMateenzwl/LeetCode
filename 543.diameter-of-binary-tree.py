#
# @lc app=leetcode id=543 lang=python3
#
# [543] Diameter of Binary Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    ans=0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.height(root)

        return self.ans

    def height(self, node:Optional[TreeNode]) -> int:
        if not node:
            return 0
        l=self.height(node.right)
        r=self.height(node.left)
        self.ans = max( l+r, self.ans)
        return 1 + max(l,r)
# @lc code=end

