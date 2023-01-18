class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        for(int i=0;i<nums2.size();i++)
        {
            map[nums2[i]]=i;
        }
        vector<int> ans(nums1.size(),0);
        int m=0;
        for(auto a:nums1)
        {
            int index=map[a];
            bool flag=true;
            for(int i=index+1;i<nums2.size();i++)
            {
                if(a<=nums2[i])
                {
                    flag=false;
                    ans[m]=nums2[i];
                    break;
                }
            }
            if(flag)
            {
                ans[m]=-1;
            }
            m++;
        }
        return ans;
    }
};