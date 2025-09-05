class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()

        newS = ''

        for c in s:
            if c.isalnum():
                newS += c
        
        return newS == newS[::-1]