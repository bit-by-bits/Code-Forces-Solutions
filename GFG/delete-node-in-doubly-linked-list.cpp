
class Solution
{
public:
    Node *deleteNode(Node *head_ref, int x)
    {
        if (x == 1)
        {
            head_ref = head_ref->next;
            head_ref->prev = NULL;
        }

        else
        {

            Node *curr = head_ref;
            for (int i = 2; i < x; i++)
                curr = curr->next;

            Node *temp = curr->next;

            if (temp->next == NULL)
                curr->next = NULL;
            else
            {
                curr->next = temp->next;
                temp->next->prev = curr;
            }

            temp->prev = NULL;
            temp->next = NULL;
            delete temp;
        }

        return head_ref;
    }
};