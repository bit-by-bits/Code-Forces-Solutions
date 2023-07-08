class Solution
{
private:
    ListNode *reverse(ListNode *head, int k, int n)
    {

        if ((n < k) || !head)
            return head;

        ListNode *PREV = NULL;
        ListNode *CURR = head;
        ListNode *NEXT = head->next;

        for (int i = 0; i < k;)
        {
            CURR->next = PREV;
            PREV = CURR;
            CURR = NEXT;

            if (++i < k)
                NEXT = CURR->next;
        }

        NEXT = reverse(CURR, k, n - k);
        head->next = NEXT;
        return PREV;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        int LENGTH = 1;
        ListNode *temp = head;
        while (temp->next)
            LENGTH++, temp = temp->next;
        return reverse(head, k, LENGTH);
    }
};