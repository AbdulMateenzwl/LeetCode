/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0 ;i<haystack.length();i++)
        {
            for(int m=0;m<needle.length();m++)
            {
                if(haystack[i+m]!=needle[m])
                {
                    break;
                }
                else if(m==needle.length()-1)
                {
                    return i;
                }
            }
        } 
        return -1;
    }
};
// @lc code=end

