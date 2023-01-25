class Solution {
public:
    vector<int> getRow(int numRows) {
        int i=0;
        vector<int> ans;
        ans.push_back(1);
        while(i<numRows)
        {
            ans = makePascle(ans);
            i++;
        }
        return ans;
    }
    vector<int> makePascle(vector<int> num)
    {
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<num.size()-1;i++)
            ans.push_back(num[i]+num[i+1]);
        ans.push_back(1);
        return ans;
    }
};