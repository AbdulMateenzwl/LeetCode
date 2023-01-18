/*
 * @lc app=leetcode id=1790 lang=cpp
 *
 * [1790] Check if One String Swap Can Make Strings Equal
 */

// @lc code=start
class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1 == s2)
        {
            return true;
        }
        int left = 0;
        int right = s2.length()-1;
        bool flag=true;
        while (left < right)
        {
            flag=true;
            if (s1[left] == s2[left])
            {
                left++;
                flag=false;
            }
            if (s1[right] == s2[right])
            {
                right--;
                flag=false;
            }
            if(flag)
            {
                break;
            }
        }
        char ch = s2[left];
        s2[left] = s2[right];
        s2[right] = ch;
        if (s1 == s2)
        {
            return true;
        }
        return false;
    }
};
// @lc code=end
