
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