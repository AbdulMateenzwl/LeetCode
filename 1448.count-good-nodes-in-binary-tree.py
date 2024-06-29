#
# @lc app=leetcode id=1448 lang=python3
#
# [1448] Count Good Nodes in Binary Tree
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def goodNodes(self, root: TreeNode, maxV = -9999999) -> int:
        if not root:
            return 0
        count = 1 if root.val >= maxV else 0
        
        count += self.goodNodes(root.left,max(maxV,root.val))
        count += self.goodNodes(root.right,max(maxV,root.val))

        return count
# @lc code=end

