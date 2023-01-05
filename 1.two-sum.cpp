/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //      Solution 1
        // for (int i = 0; i < nums.size(); i++)
        //     for (int m = i + 1; m < nums.size(); m++)
        //         if (nums[i] + nums[m] == target)
        //             return {i, m};
        // return {};

        //      Solution 2
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())
                return {m[target - nums[i]], i};
            else
                m[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
