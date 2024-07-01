#
# @lc app=leetcode id=215 lang=python3
#
# [215] Kth Largest Element in an Array
#

# @lc code=start
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = []
        for num in nums:
            heappush(heap,-num)
            if len(heap) > len(nums) - k + 1:
                heappop(heap)

        return -heappop(heap)
# @lc code=end

