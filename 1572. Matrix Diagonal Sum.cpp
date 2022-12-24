class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int m=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            if(m!=i){
                sum+=mat[i][m];
            }
            m--;
        }
        return sum;
    }
};