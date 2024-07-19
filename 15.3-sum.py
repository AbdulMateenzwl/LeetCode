class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        arr = []
        main = 0

        while main < len(nums):
            l, r = main + 1, len(nums) - 1

            while l < r:
                if nums[l] + nums[r] + nums[main] == 0:
                    arr.append([nums[l], nums[r], nums[main]])
                    
                    pre = nums[l]
                    while l < len(nums) and nums[l] == pre:
                        l += 1

                    r -= 1

                elif nums[l] + nums[r] + nums[main] > 0:
                    r -= 1
                else:
                    l += 1

            pre = nums[main]
            while main < len(nums) and nums[main] == pre:
                main += 1

        return arr