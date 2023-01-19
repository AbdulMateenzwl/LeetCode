class Solution
{
public:
    int subarraysDivByK(vector<int> &A, int K)
    {
        int n = A.size();
        if (n == 0)
            return 0;
        int i = 0, count = 0;
        int curr_sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        while (i < n)
        {
            curr_sum += A[i++];
            int rem = curr_sum % K;
            if (rem < 0)
                rem += K;
            if (mp.find(rem) != mp.end())
                count += mp[rem];
            mp[rem]++;
        }
        return count;
    }
};