
Node *detectCycle(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while (fast && slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (!fast || !slow || !fast->next)
        return NULL;
    else
    {

        slow = head;
        while (slow && fast)
        {
            if (slow == fast)
                return slow;

            slow = slow->next;
            fast = fast->next;
        }
    }

    return NULL;
}

int countNodesinLoop(struct Node *head)
{
    struct Node *end = detectCycle(head);

    if (end)
    {
        struct Node *str = end->next;

        int len = 1;
        while (str != end)
            str = str->next, len++;
        return len;
    }

    else
        return 0;
}