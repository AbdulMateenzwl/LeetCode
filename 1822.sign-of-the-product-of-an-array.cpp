/*
 * @lc app=leetcode id=1822 lang=cpp
 *
 * [1822] Sign of the Product of an Array
 */

// @lc code=start
class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        bool flag = true;
        for (auto a : nums)
        {
            if (a == 0)
                return 0;
            else if (a < 0)
                flag = !flag;
        }
        return (flag==true ? 1:-1);
    }
};
// @lc code=end
