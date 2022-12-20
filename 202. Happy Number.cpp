class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool> map;
        map[n]=true;
        while(n!=1){
            int num=n;
            int ans=0;
            while(num!=0){
                ans+=(num%10)*(num%10);
                num/=10;
            }
            if(map[ans]){
                return false;
            }
            map[ans]=true;
            cout<<n<<endl;
            n=ans;
        }
        return true;
    }
};
