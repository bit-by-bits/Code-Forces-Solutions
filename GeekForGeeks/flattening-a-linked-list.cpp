Node *merge(Node *l1, Node *l2)
{

    Node *l3 = new Node(-1);
    Node *curr = l3;
    curr->bottom = NULL;

    while (l1 && l2)
    {

        if (l1->data < l2->data)
        {
            Node *temp = new Node(l1->data);
            curr->bottom = temp;
            l1 = l1->bottom;
        }

        else
        {
            Node *temp = new Node(l2->data);
            curr->bottom = temp;
            l2 = l2->bottom;
        }

        curr = curr->bottom;
    }

    while (l1)
    {
        Node *temp = new Node(l1->data);
        curr->bottom = temp;
        l1 = l1->bottom;

        curr = curr->bottom;
    }

    while (l2)
    {
        Node *temp = new Node(l2->data);
        curr->bottom = temp;
        l2 = l2->bottom;

        curr = curr->bottom;
    }

    curr->bottom = NULL;
    return l3->bottom;
}

Node *flatten(Node *root)
{

    Node *ans = NULL;
    Node *curr = root;

    while (curr)
    {
        Node *temp = curr->next;
        ans = merge(ans, curr);
        curr = temp;
    }

    return ans;
}