#
# @lc app=leetcode id=21 lang=python3
#
# [21] Merge Two Sorted Lists
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = tmp = ListNode()

        while list1 or list2:
            if not list1:
                while list2:
                    tmp.next = list2
                    list2,tmp = list2.next,list2
                continue    
                
            if not list2:
                while list1:
                    tmp.next = list1
                    list1 , tmp = list1.next,list1
                continue
                
            if list1.val < list2.val:
                tmp.next = list1
                list1 , tmp = list1.next,list1
            else:
                tmp.next = list2
                list2,tmp = list2.next,list2

        return head.next
# @lc code=end

