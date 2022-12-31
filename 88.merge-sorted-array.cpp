class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = m, count = 0; i < nums1.size(); i++, count++)
        {
            nums1[i] = nums2[count];
            int j = i;
            for (int m = i; m > 0; m--)
            {
                if (nums1[m] < nums1[m-1])
                    swap(nums1[m], nums1[m-1]);
                else
                    break;
            }
        }
    }
};