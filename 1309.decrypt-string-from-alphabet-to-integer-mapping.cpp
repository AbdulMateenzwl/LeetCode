class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for (int i{0}; i<s.length(); ++i) 
        {
            if (i+2 < s.length() && s[i+2] == '#') 
            {
                ans+=stoi(s.substr(i, 2))+96;
                i+=2;
            } 
            else 
                ans+=s[i]+48;
        }
        return ans;
    }
};