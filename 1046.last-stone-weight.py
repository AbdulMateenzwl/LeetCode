#
# @lc app=leetcode id=1046 lang=python3
#
# [1046] Last Stone Weight
#

# @lc code=start
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        arr = [-1 * x for x in stones]
        heapq.heapify(arr)

        while len(arr) > 1:
            val1 = heapq.heappop(arr) * -1
            val2 = heapq.heappop(arr) * -1

            if val1 != val2:
                heapq.heappush(arr,abs(val1-val2) * -1)

        return arr[0] * -1 if arr else 0
# @lc code=end

