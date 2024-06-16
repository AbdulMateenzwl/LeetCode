#
# @lc app=leetcode id=875 lang=python3
#
# [875] Koko Eating Bananas
#

# @lc code=start
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        start ,end= 1, max(piles)
        minn = end

        while start <= end:
            mid = end + ( start - end ) // 2
            count = 0 
            for num in piles:
                count += ceil(num/mid)

            if count <= h:
                minn = mid
                end = mid - 1
            else:
                start = mid + 1

        return minn
# @lc code=end

