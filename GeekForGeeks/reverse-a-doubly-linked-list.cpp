Node *reverseDLL(Node *head)
{
    if (head)
    {

        Node *PREV = NULL;
        Node *CURR = head;
        Node *NEXT = head->next;

        while (NEXT != NULL)
        {

            CURR->next = PREV ? PREV : NULL;
            CURR->prev = NEXT;

            PREV = CURR;
            CURR = NEXT;
            NEXT = NEXT->next;
        }

        CURR->next = PREV;
        CURR->prev = NULL;

        head = CURR;
    }

    return head;
}