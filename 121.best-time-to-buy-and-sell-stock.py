#
# @lc app=leetcode id=121 lang=python3
#
# [121] Best Time to Buy and Sell Stock
#

# @lc code=start
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = prices[0]
        profit = 0

        for num in prices:
            if num < buy:
                buy = num
                continue
            diff = num - buy
            if diff > profit:
                profit = diff

        return profit
# @lc code=end

