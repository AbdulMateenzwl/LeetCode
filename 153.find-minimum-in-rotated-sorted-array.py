#
# @lc app=leetcode id=153 lang=python3
#
# [153] Find Minimum in Rotated Sorted Array
#

# @lc code=start
class Solution:
    def findMin(self, nums: List[int]) -> int:
        ans = nums[0]
        left, right = 0, len(nums) - 1
        while left <= right:
            if nums[left] < nums[right]:
                ans = min(ans,nums[left])
                break

            mid = left + (right - left) // 2
            ans = min(nums[mid], ans)
            if nums[mid] >= nums[left]:
                left = mid + 1
            else:
                right = mid - 1

        return ans

# @lc code=end

