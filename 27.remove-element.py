class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        end = len(nums)
        i = 0 
        while i < end :
            if nums[i] == val:
                nums[i], nums[end - 1] = nums[end - 1], nums[i]
                end -=1
            else:
                i+=1

        return end
