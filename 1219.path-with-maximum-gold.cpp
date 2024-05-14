/*
 * @lc app=leetcode id=1219 lang=cpp
 *
 * [1219] Path with Maximum Gold
 */

// @lc code=start
// Solution 1
class Solution {
public:
    int maxVal = 0;
    int getMaximumGold(vector<vector<int>>& grid) {
        int count = checkIfGridIsAllZeros(grid);
        if (count != 0)
            return count;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0)
                    search(grid, i, j, 0);
            }
        }
        return maxVal;
    }

    void search(vector<vector<int>>& grid, int i, int j, int count) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;
        if (grid[i][j] != 0) {
            int tmp = grid[i][j];
            grid[i][j] = 0;
            count += tmp;
            maxVal = max(maxVal, count);

            search(grid, i + 1, j, count);
            search(grid, i - 1, j, count);
            search(grid, i, j - 1, count);
            search(grid, i, j + 1, count);

            grid[i][j] = tmp;
        }
    }

    int checkIfGridIsAllZeros(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != 0)
                    count += grid[i][j];
                else
                    return 0;
            }
        }
        return count;
    }
};

/*
// Solution 2
class Solution {
public:
    int n, m, ans = 0;
    vector<vector<int>>mat;
    bool visited[20][20];
    int getMaximumGold(vector<vector<int>>& grid) {
        mat = grid, n = mat.size(), m = mat[0].size();
        int ans = 0, sum = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] > 0)
                {
                    getMax(i, j, sum, ans);
                    sum = 0;
                }
            }
        }
        return ans;

    }

    void getMax(int i, int j, int &sum, int &ans){
        
        if(i >= n or i < 0 or j >= m or j < 0 or visited[i][j] or !mat[i][j]) 
        {
            ans = max(ans, sum);
            return;
        }

        visited[i][j] = true;
        sum += mat[i][j];

        getMax(i+1, j, sum, ans), 
        getMax(i-1, j, sum, ans), 
        getMax(i, j+1, sum, ans), 
        getMax(i, j-1, sum, ans);

        visited[i][j] = false;
        sum -= mat[i][j];
    }
};
*/
// @lc code=end

