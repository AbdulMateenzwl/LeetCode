bool compare(int n, int m)
{
    int nb=__builtin_popcount(n);
    int mb=__builtin_popcount(m);
    if (nb != mb)
        return nb < mb;
    return n < m;
}
class Solution
{
public:
    vector<int> sortByBits(vector<int> &arr)
    {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};