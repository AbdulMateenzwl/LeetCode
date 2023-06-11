/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = false;
        bool dec = false;
        for (int x=0; x<nums.size()-1; x++){
            if (nums[x] < nums[x+1])
                inc = true;
            else if (nums[x] > nums[x+1])
                dec = true;
            if (inc && dec)
                return false;
        }
        return true;
    }
};
// @lc code=end

