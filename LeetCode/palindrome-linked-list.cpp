class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast && fast->next)
            slow = slow->next;

        ListNode *prev = NULL, *next = NULL;
        while (slow && slow->next)
        {

            next = slow->next;
            slow->next = prev;

            prev = slow;
            slow = next;
        }

        if (slow)
            slow->next = prev;

        fast = head;
        while (slow && fast)
        {

            if (slow->val != fast->val)
                return false;

            slow = slow->next;
            fast = fast->next;
        }

        return true;
    }
};