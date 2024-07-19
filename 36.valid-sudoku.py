#
# @lc app=leetcode id=36 lang=python3
#
# [36] Valid Sudoku
#

# @lc code=start
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        arr = [[set() for _ in range(9)] for _ in range(3)]
        for i in range(9):
            for j in range(9):
                charr = board[i][j]
                if charr == '.': 
                    continue

                boxIndex = (i // 3)*3 + (j // 3)

                if charr in arr[0][i] or charr in arr[1][j] or charr in arr[2][boxIndex]:
                    return False

                arr[0][i].add(charr)
                arr[1][j].add(charr)
                arr[2][boxIndex].add(charr)
        
        return True

# @lc code=end

