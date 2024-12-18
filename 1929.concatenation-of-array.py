class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        leng = len(nums)
        for i in range(leng):
            nums.append(nums[i])

        return nums