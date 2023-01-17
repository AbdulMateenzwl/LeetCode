class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int p = 0, m = 1;
        while (n > 0)
        {
            m *= (n % 10);
            p += (n % 10);
            n /= 10;
        }
        return m - p;
    }
};