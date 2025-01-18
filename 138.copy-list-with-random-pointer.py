"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""


class Solution:
    def copyRandomList(self, head: "Optional[Node]") -> "Optional[Node]":
        dic = {None: None}

        cur = head
        while cur:
            new = Node(cur.val)
            dic[cur] = new
            cur = cur.next

        cur = head
        while cur:
            old = dic[cur]
            old.next = dic[cur.next]
            old.random = dic[cur.random]
            cur = cur.next
        
        return dic[head]
