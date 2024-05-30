/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroIndex =-1;
        int totalProduct =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0)
                if(zeroIndex == -1)
                    zeroIndex = i;
                else
                    return vector<int>(nums.size(),0);
            else 
                totalProduct = totalProduct * nums[i];
        }

        vector<int> result(nums.size(),0);
        if(zeroIndex!=-1){
            result[zeroIndex] = totalProduct ;
            return result; 
        }
        for(int i=0;i<nums.size();i++){
            result[i] = (totalProduct/nums[i]);
        }

        return result;
    }
};
// @lc code=end

