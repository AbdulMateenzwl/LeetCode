class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        sett = set(nums)

        longest = 0

        for num in sett:

            if num - 1 not in sett:

                current_streak = 1
                current_num = num

                while current_num + 1 in sett:
                    current_streak += 1
                    current_num += 1
                
                longest = max(longest, current_streak)
            
        return longest
