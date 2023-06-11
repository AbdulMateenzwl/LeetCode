/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s;
        if(t.substr(1,t.size()-2).find(s)!=-1)
            return true;
        return false;
    }
};
// @lc code=end

