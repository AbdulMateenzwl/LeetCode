#
# @lc app=leetcode id=49 lang=python3
#
# [49] Group Anagrams
#

# @lc code=start
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic: Dict[str, List[int]] = {}
        result = []


        for s in strs:
            sortedStr = str(sorted(s))
            if sortedStr in dic:
                dic[sortedStr].append(s)
            else:
                dic[sortedStr] = [s]
        

        for key in dic:
            result.append(dic[key])

        return result    
# @lc code=end

