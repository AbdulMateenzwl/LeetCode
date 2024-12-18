class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        leng = 0
        flag = False
        for c in s[::-1]:
            if c == ' ':
                if flag:
                    return leng
            else:
                flag = True
                leng += 1
        
        return leng