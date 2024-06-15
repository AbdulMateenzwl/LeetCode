#
# @lc app=leetcode id=22 lang=python3
#
# [22] Generate Parentheses
#

# @lc code=start
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        self.dfs(n, n, "", result)
        return result

    def dfs(self, left: int, right: int, s: str, result: List[str]) -> None:
        if left == 0 and right == 0:
            result.append(s)
            return

        if left > 0:
            self.dfs(left - 1, right, s + "(", result)
        if right > left:
            self.dfs(left, right - 1, s + ")", result)

# @lc code=end

