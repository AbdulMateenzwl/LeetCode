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
        int end = vtr.size()-1;
        int mid = 0;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (target == vtr[mid])
                return mid;
            if (target < vtr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};
// @lc code=end
