#
# @lc app=leetcode id=102 lang=python3
#
# [102] Binary Tree Level Order Traversal
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        queue = deque()
        arr = []
        if not root:
            return arr

        queue.append(root)

        while queue:
            size = len(queue)
            tmp = []
            for i in range(size):
                popItem = queue.popleft()
                tmp.append(popItem.val)
                if popItem.left:
                    queue.append(popItem.left)
                if popItem.right:
                    queue.append(popItem.right)
            arr.append(tmp)

        return arr
# @lc code=end

