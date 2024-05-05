/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int rows = 0;
        int cols = grid[0].size()-1;
        const int SIZE =  grid.size();
        while(rows<SIZE && cols >=0){
            if(grid[rows][cols]<0){
                count+=SIZE-rows;
                cols--;
            }
            else
                rows++;
        }
        return count;
    }
};
// @lc code=end

