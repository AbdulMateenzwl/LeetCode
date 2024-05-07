/*
 * @lc app=leetcode id=2816 lang=cpp
 *
 * [2816] Double a Number Represented as a Linked List
 */

// @lc code=start
/*
// Solution 1
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        string num = "";
        while(head){
            num+=to_string(head->val);
            head=head->next;
        }
        num = doubleStr(num);
        cout<<num;
        ListNode* ans=new ListNode();
        ListNode* tmp=new ListNode();
        ans=tmp;
        for(char c:num){
            tmp->next=new ListNode(c-'0');
            tmp=tmp->next;
        }
        return ans->next;
    }
    string doubleStr(string str){
        int carry=0;
        string ans="";
        for(int i=str.length()-1;i>=0;i--){
            int tmp = (str[i]-'0' ) * 2 + carry;
            carry = tmp/10;
            ans=to_string(tmp%10)+ans;
        }
        if(carry>0){
            ans=to_string(carry)+ans;
        }
        return ans;
    }
};
*/

// Solution 2
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);

        ListNode* start = head;
        int carry = 0;
        while (start) {
            int val = start->val * 2 + carry;
            start->val = val % 10;
            carry = val / 10;
            if (start->next == nullptr && carry > 0) {
                start->next = new ListNode(carry);
                break;
            }
            start = start->next;
        }
        start = reverseList(head);
        return start;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
};

// @lc code=end

