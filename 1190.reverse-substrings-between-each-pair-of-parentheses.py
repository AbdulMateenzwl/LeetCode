#
# @lc app=leetcode id=1190 lang=python3
#
# [1190] Reverse Substrings Between Each Pair of Parentheses
#

# @lc code=start
class Solution:
    def reverseParentheses(self, s: str) -> str:
        n = len(s)
        stack = []
        pair = {}
        for i in range(n):
            if s[i] == '(':
                stack.append(i)
            elif s[i] == ')':
                j = stack.pop()
                pair[i] = j
                pair[j] = i
        result = []
        i = 0
        direction = 1 
        while i < n:
            if s[i] == '(' or s[i] == ')':
                i = pair[i]
                direction = -direction
            else:
                result.append(s[i])
            i += direction

        return ''.join(result)
# @lc code=end

