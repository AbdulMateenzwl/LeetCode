class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map;
        for(int i=0;i<s.length();i++)
        {
            if(map.find(s[i])==map.end())
            {
                if(search(map,t[i])!=s[i] && search(map,t[i])!='\0')
                    return false;
                map.insert({s[i],t[i]});
            }
            else if(map.find(s[i])->second!=t[i])
                return false;
        }
        return true;
    }
    char search(unordered_map<char,char> map,char ch)
    {
        for(auto a:map)
            if(a.second==ch)
                return a.first;
        return '\0';
    }
};