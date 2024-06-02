/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int n : numSet) {
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                while (numSet.find(n + length) != numSet.end()) {
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};

// @lc code=end

