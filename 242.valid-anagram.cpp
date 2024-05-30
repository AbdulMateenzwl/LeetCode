class Solution {
public:
bool isAnagram(string s, string t) {
    // Solution 1
    if(s.size()!=t.size()) return false;
    unordered_map<char,int> map_s;
    
    for(char i:s) 
        map_s[i]++;

    for(char j:t) 
        if(--map_s[j]<0) 
            return false;
    return true;
    
    // Solution 2
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // return s ==t;
    }
};