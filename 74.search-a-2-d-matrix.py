#
# @lc app=leetcode id=74 lang=python3
#
# [74] Search a 2D Matrix
#

# @lc code=start
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        height = len(matrix)
        width = len(matrix[0])
        left, right = 0, height*width - 1 

        while left <= right:
            mid = left + (right - left) // 2

            if matrix[mid // width][mid % width] == target:
                return True
            elif matrix[mid // width][mid % width] > target:
                right = mid - 1
            else:
                left = mid + 1

        return False
        
# @lc code=end

