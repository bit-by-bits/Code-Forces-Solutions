
class Solution
{
public:
    Node *reverse(Node *head)
    {

        Node *PREV = NULL;
        Node *CURR = head;
        Node *NEXT = head->next;

        while (NEXT != NULL)
        {
            CURR->next = PREV;

            PREV = CURR;
            CURR = NEXT;
            NEXT = NEXT->next;
        }

        CURR->next = PREV;
        return CURR;
    }

    Node *addOne(Node *head)
    {
        head = reverse(head);
        Node *curr = head;

        bool changed = false;
        while (curr)
        {
            if (curr->data < 9)
            {
                curr->data++;
                changed = true;
                break;
            }
            else
            {
                curr->data = 0;
                if (curr->next)
                    curr = curr->next;
                else
                    break;
            }
        }

        if (!changed)
            curr->next = new Node(1);
        return reverse(head);
    }
};