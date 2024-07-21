class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        que = deque()
        res= []

        for i in range(k):
            while que and nums[i] > nums[que[-1]]:
                que.pop()
            que.append(i)
        
        l = 0
        for r in range(k, len(nums)):
            val = nums[r]
            res.append(nums[que[0]])
            while que and val > nums[que[-1]]:
                que.pop()
            que.append(r)
            if que[0] == l:
                que.popleft()
            l += 1
            
        res.append(nums[que[0]])
        return res