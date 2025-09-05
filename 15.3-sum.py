class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()

        ans = []
        i = 0

        while i < len(nums) - 2:

            current = nums[i]
            l , r = i + 1, len(nums) - 1

            while l < r:
                left = nums[l]
                right = nums[r]
                summ = current + left + right

                if summ == 0:
                    ans.append([current, left, right])

                    while l < r and left == nums[l]:
                        l+=1

                    while r > l and right == nums[r]:
                        r-=1

                elif summ > 0:
                    r-=1
                else:
                    l+=1

            while i < len(nums) and nums[i] == current:
                i+=1

        return ans