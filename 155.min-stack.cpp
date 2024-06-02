/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
// Solution 1
// class MinStack {
// public:
//     stack<int> stk;
//     map<int,int> myMap;
//     MinStack() {}

//     void push(int val) {
//         stk.push(val);
//         if(myMap.find(val)==myMap.end())
//             myMap[val] = 1;
//         else
//             myMap[val]++;
//     }
    
//     void pop() {
//         myMap[stk.top()]--;
//         if(myMap[stk.top()] == 0)
//             myMap.erase(stk.top());
//         stk.pop();
//     }
    
//     int top() {
//         return stk.top();
//     }
    
//     int getMin() {
//         auto it = myMap.begin();
//         return it->first;
//     }
// };

// Solution 2
class MinStack {
public:
    stack<pair<int,int>> minStack;
    MinStack() {
    }
    
    void push(int val) {
        int minSoFar = (minStack.empty() || minStack.top().second > val) ? val : minStack.top().second;
        minStack.push({val, minSoFar});
    }
    
    void pop() {
        minStack.pop();
    }
    
    int top() {
        return minStack.top().first;
    }
    
    int getMin() {
        return minStack.top().second;
    }
};

// @lc code=end

