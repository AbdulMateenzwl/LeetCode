#
# @lc app=leetcode id=167 lang=python3
#
# [167] Two Sum II - Input Array Is Sorted
#

# @lc code=start
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        start = 0
        end = len(numbers) - 1

        while start < end:
            sumVal = numbers[start] + numbers[end]
            if  sumVal== target:
                return [start + 1, end + 1]
            elif sumVal > target:
                end -= 1
            else:
                start += 1

        return [-1, -1]

# @lc code=end

