/*
 * @lc app=leetcode id=861 lang=cpp
 *
 * [861] Score After Flipping Matrix
 */

// @lc code=start
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[0].size();j++){
                    grid[i][j]=(grid[i][j]+1)%2;
                }
            }
        }

        for(int i=0;i<grid[0].size();i++){
            int count=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==0){
                    count++;
                }
            }
            if(count>grid.size()/2){
                for(int j=0;j<grid.size();j++){
                    grid[j][i]=(grid[j][i]+1)%2;
                }
            }
        }

        int ans=0;
        for(auto c:grid){
            string str="";
            for(auto v:c){
                str+=to_string(v);
            }
            ans+=binaryToDecimal(str);
        }
        return ans;
    }

    int binaryToDecimal(string binaryString) {
        int decimalNumber = 0;
        int powerOfTwo = 1;
        for (int i = binaryString.length() - 1; i >= 0; --i) {
            if (binaryString[i] == '1') {
                decimalNumber += powerOfTwo; 
            }
            powerOfTwo *= 2;
        }
        return decimalNumber;
    }
};
// @lc code=end

