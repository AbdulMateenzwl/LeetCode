
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for (auto a:accounts)
        {
            int val=0;
            for(auto b:a)
                val+=b;
            ans=max(val,ans);
        }
        return ans;
    }
};

