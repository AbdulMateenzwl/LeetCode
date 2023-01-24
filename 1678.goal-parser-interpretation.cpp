class Solution {
public:
    string interpret(string command) {
        string ans="";
        bool flag=false;
        char pre='(';
        for(int i=0;i<command.size();i++)
        {
            
            if(command[i]=='G')
            {
                ans+='G';
            }
            else if(command[i]==')')
            {
                if(pre == '(')
                {
                    ans+='o';
                }
                else
                {
                    ans+="al";
                }
            }
            pre=command[i];
        }
        return ans;
    }
};