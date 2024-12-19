class Solution:
    def removeStars(self, s: str) -> str:
        stack = deque()
        for c in s:
            if c is '*':
                stack.pop()
            else:
                stack.append(c)
        
        return "".join(stack)