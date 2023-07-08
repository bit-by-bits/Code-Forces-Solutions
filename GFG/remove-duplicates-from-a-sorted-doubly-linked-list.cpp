class Solution
{
public:
    Node *removeDuplicates(struct Node *head)
    {
        struct Node *curr = head;
        while (curr->next)
        {
            if (curr->data == curr->next->data)
            {

                struct Node *temp = curr->next;
                if (temp->next)
                {
                    curr->next = temp->next;
                    temp->next->prev = curr;
                }
                else
                    curr->next = NULL;

                delete temp;
            }
            else
                curr = curr->next;
        }

        return head;
    }
};
