/*
 * @lc app=leetcode id=2487 lang=cpp
 *
 * [2487] Remove Nodes From Linked List
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*curr=head,*nxt=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr; 
            curr=nxt;
        }
        return head=prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);
        int max = head->val;
        ListNode *p = head;
        while(p->next != NULL)
        {
            if(p->next->val < p->val)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
            }
        }
        head = reverseList(head);
        return head;
    }
};
// @lc code=end

