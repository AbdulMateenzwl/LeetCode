#
# @lc app=leetcode id=347 lang=python3
#
# [347] Top K Frequent Elements
#

# @lc code=start
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic = Counter(nums)
        pq = []

        for key,value in dic.items():
            heapq.heappush(pq, (-1*value, key))

        result = []

        while k and pq:
            priority, val = heapq.heappop(pq)
            result.append(val)  
            k-=1

        return result
# @lc code=end

