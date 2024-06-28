#
# @lc app=leetcode id=110 lang=python3
#
# [110] Balanced Binary Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    val = True

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        print(self.DFS(root))
        return self.val
        
        
    def DFS(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        leftt = self.DFS(root.left) + 1
        rightt = self.DFS(root.right) + 1

        vall = abs(leftt - rightt)

        if vall > 1:
            self.val = False

        return max(leftt, rightt)
# @lc code=end

