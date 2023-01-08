class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        if (letters.back() <= target)
            return letters.front();
        int start = 0;
        int end = letters.size() - 1;
        while (start < end)
        {
            int mid = (end + start) / 2;
            if (letters[mid] > target)
                end = mid;
            else
                start = mid + 1;
        }
        return letters[start];
    }
};
