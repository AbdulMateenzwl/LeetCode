class Solution:
    def maxArea(self, heights: List[int]) -> int:
        maxAreaa = 0
        l, r = 0, len(heights) - 1

        while l < r:
            val = (r - l) * min(heights[l], heights[r])
            maxAreaa = max(maxAreaa, val)
            if heights[l] > heights[r]:
                r -= 1
            else:
                l += 1

        return maxAreaa