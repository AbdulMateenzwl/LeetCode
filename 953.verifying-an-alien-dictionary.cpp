class Solution
{
public:
    bool isAlienSorted(vector<string> &w, string o)
    {
        map<char, int> m;
        for (int i = 0; i < o.size(); i++)
            m[o[i]] = i;
        for (int i = 1; i < w.size(); i++)
        {
            string w1 = w[i - 1];
            string w2 = w[i];
            for (int j = 0; j < w1.size(); j++)
            {
                if (m[w1[j]] > m[w2[j]])
                    return false;
                if (m[w1[j]] < m[w2[j]])
                    break;
                if (j >= w2.size())
                    return false;
            }
        }
        return true;
    }
};