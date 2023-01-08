
class Solution
{
public:
    int mySqrt(int x)
    {
        long left = 1;
        long right = x;
        while (left <= right)
        {
            long mid = (left + right) / 2;
            if (x / mid == mid)
                return mid;
            else if (x / mid < mid)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right;
    }
};

