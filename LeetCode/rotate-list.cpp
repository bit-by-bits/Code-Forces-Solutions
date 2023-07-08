class Solution
{
public:
    ListNode *rotateby1(ListNode *head)
    {

        if (head && head->next)
        {

            ListNode *curr = head;
            while (curr->next && curr->next->next)
                curr = curr->next;

            ListNode *temp = curr->next;
            curr->next = NULL;
            temp->next = head;
            head = temp;
        }

        return head;
    }

    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head)
        {

            int length = 1;
            ListNode *curr = head;
            while (curr->next)
            {
                curr = curr->next;
                length++;
            }

            int K = k % length, i = 0;
            for (; i < K; i++)
                head = rotateby1(head);
        }

        return head;
    }
};