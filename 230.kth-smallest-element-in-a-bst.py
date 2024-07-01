#
# @lc app=leetcode id=230 lang=python3
#
# [230] Kth Smallest Element in a BST
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        arr = []
        def dfs(root:Optional[TreeNode]):
            if not root:
                return
            
            dfs(root.left)
            arr.append(root.val)
            dfs(root.right)

        dfs(root)

        return arr[k-1]

# @lc code=end

