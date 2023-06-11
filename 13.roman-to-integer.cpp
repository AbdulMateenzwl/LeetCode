/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> map;
        map.insert({'I',1});
        map.insert({'V',5});
        map.insert({'X',10});
        map.insert({'L',50});
        map.insert({'C',100});
        map.insert({'D',500});
        map.insert({'M',1000});
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(map[s[i]]<map[s[i+1]])
            {
                ans-=map[s[i]];
            }
            else
            {
                ans+=map[s[i]];
            }
        }
        return ans;
    }
};
// @lc code=end

