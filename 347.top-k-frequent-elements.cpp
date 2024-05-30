/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> map;

        for(int num:nums){
            map[num]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto m:map){
            pq.push(make_pair(m.second,m.first));
        }

        vector<int> result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
// @lc code=end

