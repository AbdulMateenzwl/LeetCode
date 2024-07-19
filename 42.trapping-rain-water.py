class Solution:
    def trap(self, heights: List[int]) -> int:
        maxH = 0
        l, r = 0, len(heights) - 1
        ans = 0 

        while l <= r:
            if heights[l] <= heights[r]:
                maxH = max(heights[l], maxH)
                ans += maxH - heights[l]  
                l += 1
            else:
                maxH = max(heights[r], maxH)
                ans +=  maxH - heights[r]  
                r -= 1

        return ans