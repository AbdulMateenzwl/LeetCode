class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
            return false;
        ListNode *single = head;
        ListNode *doub = head->next;
        while (doub && doub->next)
        {
            single = single->next;
            doub = doub->next->next;
            if (single == doub)
            {
                return true;
            }
        }
        return false;
    }
};