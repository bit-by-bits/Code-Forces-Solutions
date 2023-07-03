class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && slow && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        if (!fast || !slow || !fast->next)
            return NULL;
        else
        {

            slow = head;
            while (slow && fast)
            {
                if (slow == fast)
                    return slow;

                slow = slow->next;
                fast = fast->next;
            }
        }

        return NULL;
    }
};