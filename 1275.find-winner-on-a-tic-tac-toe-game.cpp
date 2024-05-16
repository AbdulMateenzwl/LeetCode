/*
 * @lc app=leetcode id=1275 lang=cpp
 *
 * [1275] Find Winner on a Tic Tac Toe Game
 */

// @lc code=start
class Solution
{
public:
    string tictactoe(vector<vector<int>> &grid)
    {
        vector<vector<char>> maze(3, vector<char>(3, ' '));
        char player = 'A';
        for (auto move : grid)
        {
            maze[move[0]][move[1]] = player;
            player == 'A' ? player = 'B' : player = 'A';
        }
        return check(maze);
    }

    string check(vector<vector<char>> &grid)
    {
        int countX = 0, countO = 0, totalFilled = 0;
        bool pending = false;

        for (int i = 0; i < 3; i++)
        {
            if (grid[i][0] == 'A' && grid[i][1] == 'A' && grid[i][2] == 'A')
                return "A";
            if (grid[0][i] == 'A' && grid[1][i] == 'A' && grid[2][i] == 'A')
                return "A";
            if (grid[i][0] == 'B' && grid[i][1] == 'B' && grid[i][2] == 'B')
                return "B";
            if (grid[0][i] == 'B' && grid[1][i] == 'B' && grid[2][i] == 'B')
                return "B";
            for (int j = 0; j < 3; j++)
                if (grid[i][j] != ' ')
                    totalFilled++;
        }

        if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[1][1] != ' ')
            return string(1, grid[0][0]);
        else if (grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2] && grid[1][1] != ' ')
            return string(1, grid[1][1]);
        if (totalFilled == 9)
            return "Draw";
        return "Pending";
    }
};
// @lc code=end
