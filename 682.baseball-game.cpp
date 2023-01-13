/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        //    Solution 1         time: 37%  Memory: 29%
        // stack<int> stk;
        // for (string a : operations)
        // {
        //     if (a == "C")
        //         stk.pop();
        //     else if (a == "D")
        //         stk.push(stk.top() * 2);
        //     else if (a == "+")
        //     {
        //         int num = stk.top();
        //         stk.pop();
        //         int num2 = stk.top() + num;
        //         stk.push(num);
        //         stk.push(num2);
        //     }
        //     else
        //         stk.push(stoi(a));
        // }
        // int ans=0;
        // while(!stk.empty())
        // {
        //     ans+=stk.top();
        //     stk.pop();
        // }
        // return ans;

        // Solution 2           time:83%  memory:29%
        // vector<int> vtr;
        // for (auto a : operations)
        // {
        //     if (a == "C")
        //     {
        //         vtr.erase(vtr.end() - 1);
        //     }
        //     else if (a == "D")
        //         vtr.push_back(vtr[vtr.size() - 1] * 2);
        //     else if (a == "+")
        //         vtr.push_back(vtr[vtr.size() - 1] + vtr[vtr.size() - 2]);
        //     else
        //         vtr.push_back(stoi(a));
        // }
        // int ans = 0;
        // for (auto a : vtr)
        // {
        //     ans += a;
        // }
        // return ans;

        // Solution 3           time:48%  memory:69%
        int ans = 0;
        vector<int> vtr;
        for (auto a : operations)
        {
            if (a == "C")
            {
                ans-=vtr[vtr.size()-1];
                vtr.erase(vtr.end() - 1);
            }
            else if (a == "D")
            {
                vtr.push_back(vtr[vtr.size() - 1] * 2);
                ans += vtr[vtr.size() - 1];
            }
            else if (a == "+")
            {
                vtr.push_back(vtr[vtr.size() - 1] + vtr[vtr.size() - 2]);
                ans += vtr[vtr.size() - 1];
            }
            else
            {
                vtr.push_back(stoi(a));
                ans += vtr[vtr.size() - 1];
            }
        }
        return ans;
    }
};
// @lc code=end
