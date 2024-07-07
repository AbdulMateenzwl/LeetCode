#
# @lc app=leetcode id=2181 lang=python3
#
# [2181] Merge Nodes in Between Zeros
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        head = head.next
        
        result = ListNode()
        current = result
        
        sum = 0
        
        while head:
            if head.val == 0:
                current.next = ListNode(sum)
                current = current.next
                sum = 0
            else:
                sum += head.val
            head = head.next
        
        return result.next

# @lc code=end

