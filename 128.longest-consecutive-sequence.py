#
# @lc app=leetcode id=128 lang=python3
#
# [128] Longest Consecutive Sequence
#

# @lc code=start
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        sett = set(nums)

        longest = 1
        for num in sett: 
            if num -1 not in sett:
                curr = 1
                while num + curr in sett:
                    curr+=1
                longest = max(longest,curr)
            
        return longest
                
# @lc code=end

