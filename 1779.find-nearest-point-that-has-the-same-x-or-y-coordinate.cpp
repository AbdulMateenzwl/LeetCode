/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */

// @lc code=start
class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int m = INT_MAX;
        int index = -1;
        for (int i = 0; i < points.size(); i++)
        {
            if (x == points[i][0] || y == points[i][1])
            {
                int a = abs(x - points[i][0]) + abs(y - points[i][1]);
                if (a < m)
                {
                    m = a;
                    index = i;
                }
            }
        }
        return index;
    }
};
// @lc code=end
