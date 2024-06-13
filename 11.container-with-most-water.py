#
# @lc app=leetcode id=11 lang=python3
#
# [11] Container With Most Water
#

# @lc code=start
class Solution:
    def maxArea(self, height: List[int]) -> int:
        left , right = 0 , len(height) - 1
        MaxArea = min(height[left],height[right])*(right - left)

        while(left < right):
            if height[left] < height[right]:
                left += 1
            else:
                right -=1
            MaxArea = max (min(height[left],height[right])*(right - left),MaxArea)
        print(MaxArea)
        return MaxArea

# @lc code=end

