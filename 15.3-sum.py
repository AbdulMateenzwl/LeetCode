class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        nums.sort()

        for i, a in enumerate(nums):
            if i > 0 and a == nums[i-1]:
                continue
            start , end = i+1, len(nums) - 1
            while start < end:
                sumVal = nums[start] + nums[end] + a
                if  sumVal == 0:
                    result.append([a,nums[start],nums[end]])
                    start  += 1
                    while nums[start] == nums[start - 1] and start < end:
                        start += 1
                elif sumVal > 0:
                    end -= 1
                else:
                    start += 1
                    

        return result
