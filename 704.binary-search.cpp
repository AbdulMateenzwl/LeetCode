/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &vtr, int target)
    {
        int start = 0;
        int end = vtr.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (vtr[mid] == target)
                return mid;
            else if (vtr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};
// @lc code=end
