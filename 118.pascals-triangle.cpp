class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        int i = 1;
        vector<vector<int>> ans;
        vector<int> a;
        a.push_back(1);
        ans.push_back(a);
        while (i < numRows)
        {
            ans.push_back(makePascle(ans[i - 1]));
            i++;
        }
        return ans;
    }
    vector<int> makePascle(vector<int> num)
    {
        vector<int> ans;
        ans.push_back(1);
        for (int i = 0; i < num.size() - 1; i++)
            ans.push_back(num[i] + num[i + 1]);
        ans.push_back(1);
        return ans;
    }
};