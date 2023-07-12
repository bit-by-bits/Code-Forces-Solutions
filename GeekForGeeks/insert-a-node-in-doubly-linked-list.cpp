void addNode(Node *head, int pos, int data)
{

    Node *temp = new Node(data);
    temp->prev = NULL;
    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else
    {

        Node *curr = head;
        for (int i = 0; i < pos; i++)
        {
            if (curr->next == NULL)
                return;
            curr = curr->next;
        }

        if (curr->next == NULL)
            temp->next = NULL;
        else
        {
            temp->next = curr->next;
            curr->next->prev = temp;
        }

        curr->next = temp;
        temp->prev = curr;
    }
}