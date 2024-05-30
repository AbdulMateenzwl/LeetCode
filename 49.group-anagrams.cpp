/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;

        for(string str:strs){
            string tmp = str;
            sort(tmp.begin(),tmp.end());
            map[tmp].push_back(str);
        }

        vector<vector<string>> result;

        for(auto m:map){
            result.push_back(m.second);
        }

        return result;
    }
};
// @lc code=end

