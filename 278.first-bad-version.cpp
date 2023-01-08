/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        int mid=0;
        while(left<right)
        {
            mid=left + (right - left)/2;
            if(isBadVersion(mid))
                right=mid;
            else
                left=mid+1;
        }
        return left;
    }
};
// @lc code=end

