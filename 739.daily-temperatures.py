#
# @lc app=leetcode id=739 lang=python3
#
# [739] Daily Temperatures
#

# @lc code=start
class Solution:
    def dailyTemperatures(self, tmps: List[int]) -> List[int]:
        stk = deque()
        results = [0]*len(tmps)

        for i in range(len(tmps) - 1, -1, -1):
            while stk and tmps[stk[-1]] <= tmps[i]:
                stk.pop()
            if stk:
                index = stk[-1]
                results[i] =index - i
            stk.append(i)

        return results
# @lc code=end

