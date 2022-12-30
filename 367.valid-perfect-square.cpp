
class Solution {
public:
    bool isPerfectSquare(int num) {
        float n=sqrt(num);
        return ceil(n)==floor(n);
    }
};