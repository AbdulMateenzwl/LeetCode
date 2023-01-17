/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution
{
public:
    double average(vector<int> &salary)
    {
        int max = 0;
        int min = salary[0];
        double ans = 0;
        for (int i = 0; i < salary.size(); i++)
        {
            ans += salary[i];
            if (salary[i] > max)
                max = salary[i];
            else if (salary[i] < min)
                min = salary[i];
        }
        ans -= max + min;
        return ans / (salary.size() - 2);
    }
};
// @lc code=end
