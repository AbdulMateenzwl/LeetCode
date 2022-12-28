class Solution
{
public:
    int guessNumber(int n)
    {
        int start = 0;
        int end = n;
        int mid;
        while (start <= end)
        {
            mid =  start + (end - start) / 2;
            int num = guess(mid);
            if (num == 0)
                return mid;
            if (num == -1)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return -1;
    }
};