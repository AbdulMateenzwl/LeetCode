/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start

// Solution 1
// class Solution {
// public:
//     vector<string> findRelativeRanks(vector<int>& a) {
//         int n = a.size();
//         vector<pair<int,int>> pairs;
//         for(int i=0;i<n;i++)pairs.push_back({a[i],i});
//         sort(pairs.begin(), pairs.end(), greater<pair<int,int>>());
//         vector<string> res(n);
//         for(int i=0;i<n;i++) {
//             if(i==0)
//                 res[pairs[i].second]="Gold Medal";
//             else if(i==1)
//                 res[pairs[i].second]="Silver Medal";
//             else if(i==2)
//                 res[pairs[i].second]="Bronze Medal";
//             else 
//                 res[pairs[i].second] = to_string(i+1);
//         }
//         return res;
//     }
// };

// Solution 2
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int, int> mp;
        vector<string> result(n);
        
        for (int i = 0; i < n; i++) {
            mp[score[i]] = i;
        }       
        sort(score.begin(), score.end(), greater<int>());   
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[mp[score[i]]] = "Gold Medal";
            } else if (i == 1) {
                result[mp[score[i]]] = "Silver Medal";
            } else if (i == 2) {
                result[mp[score[i]]] = "Bronze Medal";
            } else {
                result[mp[score[i]]] = to_string(i + 1);
            }
        }
        
        return result;
    }
};
// @lc code=end

