/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //  Solution 1
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);

        // Solution 2
        int min1=0,min2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>min2)
            {
                min1=min2;
                min2=nums[i];
            }
            else if(nums[i]>min1)
            {
                min1=nums[i];
            }
        }
        return (min1-1)*(min2-1);
    }
};
// @lc code=end

