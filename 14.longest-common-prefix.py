class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        pre = ""
        for i in range(len(strs[0])):
            for strr in strs:
                if strs[0][i] not in strr[i]:
                    return pre

            pre += strs[0][i]
        
        return pre