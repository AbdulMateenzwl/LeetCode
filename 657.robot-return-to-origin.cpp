/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int countX = 0, countY = 0;
        for (int i = 0;i<moves.length();i++) {
            if (moves[i]== 'U')
                countY++;
            else if (moves[i]== 'D')
                countY--;
            else if (moves[i]== 'R')
                countX++;
            else
                countX--;
        }
        return countX == 0 && countY == 0;
    }
};
// @lc code=end

