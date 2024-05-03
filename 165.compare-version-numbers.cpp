class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int i=0;
        string ver1="";
        
        int j=0;
        string ver2="";
        while(i<version1.length() || j<version2.length()){
            ver1="";
            while(i<version1.length()){
                if(version1[i]=='.'){
                    i++;
                    break;
                }
                ver1+=version1[i];
                i++;
            }

            int v1 = 0;
            if(ver1!="") v1 = stoi(ver1);

            ver2=""; 
            while(j<version2.length()){
                if(version2[j]=='.'){
                    j++;
                    break;
                }
                ver2+=version2[j];
                j++;
            }

            int v2 = 0;
            if(ver2!="") v2 = stoi(ver2);

            if(v1 > v2) return 1; 
            else if (v1 < v2) return -1;
        }

        return 0;
    }
};