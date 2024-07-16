#
# @lc app=leetcode id=2418 lang=python3
#
# [2418] Sort the People
#

# @lc code=start
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        l=heights
        l=sorted(l,reverse=True)
        res=[]
        for i in range(len(l)):
            res.append(names[heights.index(l[i])])
        return res
# @lc code=end

