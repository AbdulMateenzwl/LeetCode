class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        stack =[]

        for ast in asteroids:
            stack.append(ast)
            while len(stack) >= 2:
                top1 = stack[-1]
                top2 = stack[-2]

                if top1 < 0 and top2 > 0:
                    stack.pop()
                    stack.pop()
                    if abs(top1) > abs(top2):
                        stack.append(top1)                
                    elif abs(top1) < abs(top2):
                        stack.append(top2)
                else:
                    break
        
        return stack