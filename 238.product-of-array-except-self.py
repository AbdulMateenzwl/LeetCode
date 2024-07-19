#
# @lc app=leetcode id=238 lang=python3
#
# [238] Product of Array Except Self
#

# @lc code=start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = 1
        zero = False

        for num in nums:
            if num is not 0:
                product *= num
            elif zero is True:
                return [0] * len(nums)
            else:
                zero = True

        arr = [0] * len(nums)
        for i in range(len(nums)):
            if nums[i] is 0:
                arr[i] = product
            elif zero:
                arr[i] = 0
            else:
                arr[i] = product // nums[i]

        return arr

# @lc code=end

