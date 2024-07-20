#
# @lc app=leetcode id=424 lang=python3
#
# [424] Longest Repeating Character Replacement
#

# @lc code=start
class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l, r , longest = 0, 0, 0
        counter = {}


        maxf = 0 
        while r < len(s):
            counter[s[r]] = 1 + counter.get(s[r],0)
            maxf = max(maxf, counter[s[r]])

            while (r - l + 1) - maxf > k:
                counter[s[l]] -= 1
                l += 1

            r+=1
            longest = max(longest, r - l )
        
        return longest
            
# @lc code=end

