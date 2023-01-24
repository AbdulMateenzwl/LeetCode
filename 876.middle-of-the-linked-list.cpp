class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *mid = head;
        while (head != NULL)
        {
            head = head->next;
            if (head == NULL)
                break;
            else
                head = head->next;
            mid = mid->next;
        }
        return mid;
    }
};