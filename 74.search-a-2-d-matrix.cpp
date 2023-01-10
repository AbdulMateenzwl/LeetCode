/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            if(chk(matrix[i],target))
                return true;
        }
        return false;
    }
    bool chk(vector<int> matrix, int target)
    {
        int l = 0;
        int r = matrix.size();
        int m = 0;
        while (l != r)
        {
            m = (r + l) / 2;
            if (matrix[m] == target)
                return true;
            else if (matrix[m] < target)
                l = m + 1;
            else
                r = m;
        }
        return false;
    }
};
// @lc code=end
