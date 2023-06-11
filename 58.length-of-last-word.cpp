/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool flag=false;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] != ' ')
            {
                count++;
                flag=true;
            }
            else if(flag)
            {
                return count;
            }
        }
        return count;
    }
};
// @lc code=end

