class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> map;
        while (n != 1)
        {
            if (map.find(n) == map.end())
            {
                map.insert(n);
                int v = 0;
                while (n != 0)
                {
                    v += (n % 10) * (n % 10);
                    n=n/10;
                }
                n=v;
            }
            else
                return false;
        }
        return true;
    }
};
