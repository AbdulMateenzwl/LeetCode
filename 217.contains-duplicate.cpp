class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ////////////////    Method 1
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])  return true;
        // }
        // return false;
        
        /////////////////////   Method 2
        // return nums.size() > set<int>(nums.begin(), nums.end()).size(); 

        ///////////////////    Method 3
        // map<int, bool> myMap;
        // for (auto& num: nums) {
        //     if (myMap.find(num) != myMap.end())
        //         return true;
        //     else
        //         myMap[num] = true;
        // }
        // return false;

        //////////////////////// MEthod 4
        unordered_map<int,bool> map;
        for(int num:nums){
            if(map.find(num)==map.end()){
                map[num]=true;
            }
            else {
                return true;
            }
        }
        return false;
    }
};