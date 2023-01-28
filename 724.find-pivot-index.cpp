/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int right = 0, left = 0;
        for (auto a : nums)
            right += a;
        for (int i = 0; i < nums.size(); i++)
        {
            right -= nums[i];
            if (right == left)
                return i;
            left += nums[i];
        }
        return -1;
    }
};
// @lc code=end
