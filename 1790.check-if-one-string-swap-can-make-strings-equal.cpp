class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        if (s1 == s2)
            return true;
        int left = 0;
        int right = s2.length() - 1;
        bool flag = true;
        while (left < right)
        {
            flag = true;
            if (s1[left] == s2[left])
            {
                left++;
                flag = false;
            }
            if (s1[right] == s2[right])
            {
                right--;
                flag = false;
            }
            if (flag)
                break;
        }
        swap(s2[left], s2[right]);
        return (s1 == s2);
    }
};