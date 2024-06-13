#
# @lc app=leetcode id=42 lang=python3
#
# [42] Trapping Rain Water
#

# @lc code=start
class Solution:
    def trap(self, height: List[int]) -> int:
        ans = 0
        maxHeight = 0
        start ,end = 0 , len(height) - 1
        
        while start < end:
            if height[start] < height[end]:
                if(maxHeight > height[start]):
                    ans += maxHeight - height[start]
                maxHeight = max(maxHeight, height[start])
                start +=1
            else:
                if(maxHeight > height[end]):
                    ans += maxHeight - height[end]
                maxHeight = max(maxHeight, height[end])
                end -= 1

        return ans
        
# @lc code=end

