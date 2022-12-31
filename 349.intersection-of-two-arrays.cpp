/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        // Unordered Map
        // unordered_map<int, bool> map;
        // vector<int> ans;
        // for (int i = 0; i < nums1.size(); i++)
        // {
        //     for (int m = 0; m < nums2.size(); m++)
        //     {
        //         if (nums1[i] == nums2[m])
        //             if (map.find(nums1[i]) == map.end())
        //             {
        //                 map[nums1[i]] = true;
        //                 ans.push_back(nums1[i]);
        //             }
        //     }
        // }
        // return ans;


        //  unordered set           Fast
        unordered_set<int> s(nums1.begin(),nums1.end());
        vector<int> ans;
        for(auto a: nums2){
            if(s.count(a)){
                ans.push_back(a);
                s.erase(a);
            }
        }
        return ans;
    }
};
// @lc code=end
