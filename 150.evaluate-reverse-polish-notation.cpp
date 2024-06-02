/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> stk;
        for(auto a:tokens){
            if(isOper(a)){
                long first=stk.top();
                stk.pop();
                long second=stk.top();
                stk.pop();
                if(a=="+"){
                    stk.push(first+second);
                }
                else if(a=="-"){
                    stk.push(second-first);
                }
                else if (a=="*"){
                    stk.push((long long)first*second);
                }
                else if(a=="/"){
                    stk.push((second/first));
                }
            }
            else{
                stk.push(stoi(a));
            }
        }
        return stk.top();
    }
    bool isOper(string c){
        if(c=="+" || c=="-"|| c=="/"|| c=="*"){
            return true;
        }
        return false;
    }
};

// @lc code=end

