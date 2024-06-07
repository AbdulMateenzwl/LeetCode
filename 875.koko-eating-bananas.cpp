/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
public:
    long minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        auto maxIt = std::max_element(piles.begin(), piles.end());
        int end = *maxIt;
        long result = end;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            long count = 0;
            for (int num : piles) {
                count += ceil(double(num) / (double)mid);
            }
            if (count <= h) {
                result = mid;
                end = mid - 1;
            } else
                start = mid + 1;
        }

        return result;
    }
};
// @lc code=end

