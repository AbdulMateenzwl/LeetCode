/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length =0;
        int started = false;
        for(int i =s.length()-1;i>=0;i--){
            if (s[i]!=' ') {
                length++;
                started=true;
            }
            else if(started)
                return length;
        }
        return length;
    }
};
// @lc code=end

