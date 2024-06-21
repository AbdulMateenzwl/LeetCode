#
# @lc app=leetcode id=206 lang=python3
#
# [206] Reverse Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Solution 1
        pre = None

        while head:
            next = head.next
            head.next = pre
            pre = head
            head = next

        return pre
        
        # Solution 2
        stk = deque()

        while head:
            stk.append(head.val)
            head = head.next

        ans = tmp = ListNode()
        while stk:
            tmp.next = ListNode(val = stk.pop())
            tmp = tmp.next
        print(stk)
        return ans.next
# @lc code=end

