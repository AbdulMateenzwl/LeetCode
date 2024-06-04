/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end) {
            if(s[start] >= 'A' && s[start] <= 'Z'){
                s[start]=s[start]+32;
            }
            if(s[end] >= 'A' && s[end] <= 'Z'){
                s[end]=s[end]+32;
            }

            if ((s[start] < 'a' || s[start] > 'z') && (s[start] < 48 || s[start] > 57)) {
                start++;
                continue;
            }
            if ((s[end] < 'a' || s[end] > 'z') && (s[end] < 48 || s[end] > 57 )) {
                end--;
                continue;
            }

            if (s[start++] != s[end--]) {
                return false;
            }
        }
        return true;
    }

};
// @lc code=end

