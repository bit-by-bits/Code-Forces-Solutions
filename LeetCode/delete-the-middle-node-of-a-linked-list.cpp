class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {

        if (!head)
            return NULL;

        ListNode str(-1);
        str.next = head;
        ListNode *mid = &str;

        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        while (mid->next != slow)
        {
            mid = mid->next;
        }

        if (slow == head)
            return (head->next) ? (head->next) : NULL;

        mid->next = slow->next;
        slow->next = NULL;
        delete slow;

        return head;
    }
};