class Solution
{
public:
    void deleteAllOccurOfX(struct Node **head_ref, int x)
    {

        Node **curr = head_ref;
        while (*curr)
        {

            if ((*curr)->data == x)
            {

                Node *temp = *curr;
                (*curr) = (*curr)->next;
                delete temp;
            }

            else
                curr = &((*curr)->next);
        }
    }
};
