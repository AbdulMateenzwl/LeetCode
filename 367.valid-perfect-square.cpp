
class Solution {
public:
    bool isPerfectSquare(int num) {
        int count=1;
        while(num>0)
        {
            num-=count;
            count+=2;
            if(num<0) return false;
        }
        return true;
    }
};