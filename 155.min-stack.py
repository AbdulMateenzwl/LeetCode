class MinStack:

    def __init__(self):
        self.stk = deque()    

    def push(self, val: int) -> None:
        if not self.stk:
            self.stk.append([val,val])
        else:
            self.stk.append([val, min(self.stk[-1][1], val)])

    def pop(self) -> None:
        self.stk.pop()

    def top(self) -> int:
        return self.stk[-1][0]

    def getMin(self) -> int:
        return self.stk[-1][1]