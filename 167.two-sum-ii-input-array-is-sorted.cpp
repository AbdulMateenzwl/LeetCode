/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),i=0,j=n-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)
            {
                return {i+1,j+1};
            }
            else if(numbers[i]+numbers[j]>target)
            {
                j--;
            }
            else {
                i++;
            }
        }
        return{-1};
    }
};
// @lc code=end

