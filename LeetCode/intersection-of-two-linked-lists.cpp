class Solution
{
public:
    int getCount(ListNode *head)
    {

        if (head == NULL)
            return 0;

        int length = 1;
        ListNode *curr = head;
        while (curr->next)
        {
            curr = curr->next;
            length++;
        }

        return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        int lenA = getCount(headA);
        int lenB = getCount(headB);
        int maxm = min(lenA, lenB);

        ListNode *currA = headA;
        ListNode *currB = headB;
        for (int i = 0; i < lenA - maxm; i++)
            currA = currA->next;
        for (int i = 0; i < lenB - maxm; i++)
            currB = currB->next;

        while (currA && currB)
        {
            if (currA == currB)
                return currA;

            currA = currA->next;
            currB = currB->next;
        }

        return NULL;
    }
};