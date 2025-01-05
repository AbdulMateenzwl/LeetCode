class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        pre = None

        while head:
            curr = head
            head = head.next
            curr.next = pre
            pre = curr
        
        return pre