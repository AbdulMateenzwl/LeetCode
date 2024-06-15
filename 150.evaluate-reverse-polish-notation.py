#
# @lc app=leetcode id=150 lang=python3
#
# [150] Evaluate Reverse Polish Notation
#

# @lc code=start
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stk = deque()

        for token in tokens:
            if token in '+-*/':
                val1 = stk.pop()
                val2 = stk.pop()
                ans = 0
                if token == '+':
                    ans = (val1 + val2)
                elif token == '-':
                    ans =(val2 - val1)
                elif token == '*':
                    ans =(val1 * val2)
                else:
                    ans =(int(val2 / val1))
                stk.append(ans)
            else:
                stk.append(int(token))
        
        return stk.pop()
# @lc code=end

