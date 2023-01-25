class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        else if(t=="") return false;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[0])
            {
                return isSubsequence(s.substr(1),t.substr(i+1));
            }
        }
        return false;
    }
};