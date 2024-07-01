#
# @lc app=leetcode id=973 lang=python3
#
# [973] K Closest Points to Origin
#

# @lc code=start
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        arr = []
        for val in points:
            dist = val[0] * val[0] +  val[1] * val[1]
            heapq.heappush(arr,(dist,val))

        ans = []
        while k > 0:
            ans.append(heapq.heappop(arr)[1])
            k-=1
        
        return ans

# @lc code=end

