#
# @lc app=leetcode id=3 lang=python3
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sett = set()
        l, r, ans = 0, 0, 0
        while r < len(s):
            while s[r] in sett:
                sett.remove(s[l])
                l += 1
            sett.add(s[r])
            ans = max(ans, r - l + 1)
            r += 1
            
        return ans

# @lc code=end

