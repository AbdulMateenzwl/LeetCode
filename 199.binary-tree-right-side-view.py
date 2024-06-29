#
# @lc app=leetcode id=199 lang=python3
#
# [199] Binary Tree Right Side View
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        queue = deque()
        arr = []
        if not root:
            return arr

        queue.append(root)

        while queue:
            size = len(queue)
            arr.append(queue[-1].val)
            for i in range(size):
                popItem = queue.popleft()
                if popItem.left:
                    queue.append(popItem.left)
                if popItem.right:
                    queue.append(popItem.right)

        return arr
# @lc code=end

