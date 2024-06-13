#
# @lc app=leetcode id=242 lang=python3
#
# [242] Valid Anagram
#

# @lc code=start
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # Solution 1
        # return sorted(s) == sorted(t)

        # Solution 2
        dic1 = Counter(s)
        dic2 = Counter(t)

        return dic1 == dic2 
# @lc code=end

