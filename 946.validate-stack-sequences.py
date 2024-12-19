class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        pushed = deque(pushed)
        popped = deque(popped)

        stack = deque()

        while pushed and popped:
            pushedVal = pushed[0]
            pulledVal = popped[0]
            if stack and stack[-1] == pulledVal:
                stack.pop()
                popped.popleft()
            else:
                stack.append(pushedVal)
                pushed.popleft()
        
        while popped:
            if stack and stack[-1] == popped[0]:
                stack.pop()
                popped.popleft()
            else:
                break
        
        return len(stack) == 0