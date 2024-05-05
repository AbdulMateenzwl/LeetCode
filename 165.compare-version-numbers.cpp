class Solution {
public:
    int compareVersion(string version1, string version2) {
        for(int i=0, j=0,v1=0,v2=0;i<version1.length() || j<version2.length();i++,j++,v1=0,v2=0){
            while(i<version1.length() && version1[i]!='.')
                v1=10*v1+(version1[i++]-'0');
            while(j<version2.length() && version2[j]!='.')
                v2=v2*10+(version2[j++]-'0');
            if(v1 > v2) return 1; 
            else if (v1 < v2) return -1;
        }
        return 0;
    }
};