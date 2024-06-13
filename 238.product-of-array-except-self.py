#
# @lc app=leetcode id=238 lang=python3
#
# [238] Product of Array Except Self
#

# @lc code=start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        totalProduct = 1
        zeroCount = 0

        for num in nums:
            if num is not 0:
                totalProduct*=num
            else:
                zeroCount+=1
            
        if zeroCount > 1:
            return result

        for i in range(len(result)):
            if nums[i] is not 0:
                if zeroCount > 0:
                    result[i] = 0
                else:
                    result[i] = totalProduct // nums[i]
            else:
                result[i] = totalProduct

        return result
# @lc code=end

