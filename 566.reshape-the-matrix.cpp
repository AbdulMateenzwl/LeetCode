/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() *  mat[0].size() != c*r)
            return mat;
        int col=0,row=0;
        vector<vector<int>> ans(r,vector<int>(c));
        for(vector<int> a:mat)
        {
            for(int b:a)
            {
                ans[row][col]=b;
                col++;
                if(col==c)
                {
                    col=0;
                    row++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

