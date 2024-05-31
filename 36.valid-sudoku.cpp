/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (vector<char> line : board) {
            int result = isValidBox(line);
            if (!result)
                return false;
        }

        for (int i = 0; i < 9; i++) {
            vector<char> line;
            for (int j = 0; j < 9; j++) {
                line.push_back(board[j][i]);
            }
            int result = isValidBox(line);
            if (!result)
                return false;
        }

        int x = 0, y = 0;
        for (int x = 0; x < 9; x += 3) {
            for (int y = 0; y < 9; y += 3) {
                vector<char> line;
                for (int i = x; i < x + 3; i++) {
                    for (int j = y; j < y + 3; j++) {
                        line.push_back(board[i][j]);
                    }
                }
                bool result = isValidBox(line);
                if (!result)
                    return false;
            }
        }

        return true;
    }

    bool isValidBox(vector<char> box) {
        set<char> mySet;
        for (char c : box) {
            if (c == '.')
                continue;
            else if (mySet.find(c) == mySet.end()) {
                mySet.insert(c);
            } else
                return false;
        }
        return true;
    }
};
// @lc code=end

