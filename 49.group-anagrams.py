class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        arr = []
        dic = {}
        idx = 0

        for s in strs:
            ss = str(sorted(s))
            if ss not in dic:
                dic[ss] = idx
                arr.append([])
                arr[idx].append(s)
                idx += 1
            else:
                arr[dic[ss]].append(s)

        return arr