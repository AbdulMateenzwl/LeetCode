#
# @lc app=leetcode id=36 lang=python3
#
# [36] Valid Sudoku
#

# @lc code=start
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in board:
            sett = set()
            for val in row:
                if val is not '.' and val in sett:
                    return False
                sett.add(val)

        for i in range( len(board) ):
            sett = set()
            for j in range( len(board[i])):
                if board[j][i] is not '.' and board[j][i] in sett:
                    return False
                sett.add(board[j][i])       

        countx = 0 
        while countx < 3:
            county = 0
            while county < 3:
                sett = set()
                for i in range(3):
                    for j in range(3):
                        if board[3*countx + i][3*county + j] is not '.' and board[3*countx + i][3*county + j] in sett:
                            return False
                        print(sett)
                        sett.add(board[3*countx + i][3*county + j])
                print(sett)
                county+=1
            countx+=1
        
        return True
        
# @lc code=end

