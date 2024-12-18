class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if s is "":
            return True
        l, r = 0 , len(s)
        i = 0
        while i < (len(t)):
            while t[i] == s[l]:
                l+=1
                i+=1
                if l == r:
                    return True
                if i == len(t):
                    return False
            i += 1
        
        return False

        