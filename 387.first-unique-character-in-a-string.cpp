
class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> vtr(26, 0);
        for (auto ch : s)
            vtr[ch - 'a']++;
        for (int i = 0; i < s.length(); i++)
            if (vtr[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};