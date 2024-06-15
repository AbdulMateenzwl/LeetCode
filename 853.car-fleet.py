#
# @lc app=leetcode id=853 lang=python3
#
# [853] Car Fleet
#

# @lc code=start
class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = [(position[i], speed[i]) for i in range(len(position))]
        
        cars.sort()
        stack = deque()
        for pos, spd in reversed(cars):
            time = (target - pos) / float(spd)
            if not stack or time > stack[-1]:
                stack.append(time)
        
        return len(stack)
# @lc code=end

