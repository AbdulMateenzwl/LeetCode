#
# @lc app=leetcode id=2 lang=python3
#
# [2] Add Two Numbers
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(
        self, l1: Optional[ListNode], l2: Optional[ListNode]
    ) -> Optional[ListNode]:
        rem = 0

        head = tmp = ListNode()

        while l1 or l2:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0
            sum_val = val1 + val2 + rem
            rem = sum_val // 10
            tmp.next = ListNode(sum_val % 10)
            tmp = tmp.next
            if l1:
                l1 = l1.next 
            if l2:
                l2 = l2.next 

        if rem > 0:
            tmp.next = ListNode(rem)

        return head.next

# @lc code=end

