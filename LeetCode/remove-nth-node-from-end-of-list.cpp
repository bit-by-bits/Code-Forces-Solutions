class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (!head)
            return NULL;

        ListNode str(-1);
        str.next = head;

        ListNode *slow = &str, *fast = &str;
        for (int i = 0; i < n; i++)
            fast = fast->next;

        while (fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        return str.next;
    }
};