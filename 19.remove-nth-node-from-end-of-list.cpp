/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start=head;
        int size=0;
        while(start){
            size++;
            start=start->next;
        }
        int no=size-n;
        int count=0;
        start=head;
        ListNode* pre=head;
        if(no==0)   
            return start->next;
        while(start){
            if(count==no){
                pre->next=start->next;
                return head;
            }
            pre=start;
            count++;
            start=start->next;
        }
        return head;
    }
};
// @lc code=end

