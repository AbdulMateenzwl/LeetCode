#
# @lc app=leetcode id=1550 lang=python3
#
# [1550] Three Consecutive Odds
#

# @lc code=start
class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        # Solution 1
        # def isOdd(num:int):
        #     return num%2 == 1

        # for i in range(len(arr)-2):
        #     if isOdd(arr[i]):
        #         if isOdd(arr[i+1]):
        #             if isOdd(arr[i+2]):
        #                 return True
        #             else:
        #                 i+=2
        #         else:
        #             i+=1

        # return False

        # Solution 2
        count = 0
        for i in range(0, len(arr)):
            if arr[i] % 2 != 0:
                count += 1
            else:
                count = 0
            if count == 3:
                return True

        return False

# @lc code=end

