class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode *,int> map;
        int count=0;
        while(head!=NULL)
        {
            if(map.find(head)==map.end())
            {
                map.insert({head,count});
            }
            else
            {
                return map.find(head)->first;
            }
            count++;
            head=head->next;
        }
        return NULL;
    }
};