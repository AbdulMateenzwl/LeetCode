#
# @lc app=leetcode id=125 lang=python3
#
# [125] Valid Palindrome
#

# @lc code=start
class Solution:
    def isPalindrome(self, s: str) -> bool:
        simple = ''

        for char in s:
            if char is ' ':
                continue

            elif (char >= 'a' and char <='z') or (char >= '0' and char <= '9'):
                simple += char
            
            elif char >= 'A' and char <= 'Z':
                simple += char.lower()

        return simple == simple[::-1]        
# @lc code=end

