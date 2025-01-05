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
        
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        top = 0
        bottom = len(matrix) - 1

        while top <= bottom:
            mid = (top + bottom ) // 2
            if target > matrix[mid][-1] :
                top = mid + 1
            elif target < matrix[mid][0]:
                bottom = mid - 1
            else:
                break

        if not (top <= bottom):
            return False
        
        left = 0
        right = len(matrix[0]) - 1
        row = (top + bottom) // 2
         
        while left <= right:
            mid = (left + right ) // 2

            if target == matrix[row][mid]:
                return True
            elif target > matrix[row][mid]:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
            
# @lc code=end

