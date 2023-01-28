class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head, *tmp;
        head = new ListNode();
        tmp = new ListNode();
        head = tmp;
        while (list1 && list2)
        {
            if (list1->val >= list2->val)
            {
                tmp->next = list2;
                list2 = list2->next;
            }
            else
            {
                tmp->next = list1;
                list1 = list1->next;
            }
            tmp = tmp->next;
        }
        if (list1)
            tmp->next = list1;
        if (list2)
            tmp->next = list2;
        return head->next;
    }
};