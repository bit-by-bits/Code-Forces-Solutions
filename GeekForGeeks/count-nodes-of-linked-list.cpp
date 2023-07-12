class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {

        if (head == NULL)
            return 0;

        int length = 1;
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
            length++;
        }

        return length;
    }
};