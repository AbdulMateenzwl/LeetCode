
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        //   Solution 1
        // unordered_map<int, bool> m1;
        // vector<int> ans;
        // for (int j = 0; j < nums1.size(); j++)
        // {
        //     for (int i = 0; i < nums2.size(); i++)
        //     {
        //         if (nums1[j] == nums2[i])
        //         {
        //             if (m1.find(i) == m1.end())
        //             {
        //                 m1[i] = true;
        //                 ans.push_back(nums2[i]);
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return ans;

        //  Solution 2
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
                i++;
            else if (nums1[i] > nums2[j])
                j++;
        }
        return ans;
    }
};