class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        heapify(nums)

        longest = 1
        length = 1
        pre  = heappop(nums)
        while nums:
            val = heappop(nums)
            if val == pre:
                continue
            elif val == pre + 1:
                length += 1
            else:
                length = 1
            pre = val
            longest = max(length, longest)
        
        return longest
            
