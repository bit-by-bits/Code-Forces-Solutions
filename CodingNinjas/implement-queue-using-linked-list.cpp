void Queue::push(int x)
{

    Node *temp = new Node(x);
    if (rear)
        rear->next = temp;
    if (!front)
        front = temp;

    temp->next = NULL;
    rear = temp;
}

int Queue::pop()
{

    if (front)
    {
        int ret = front->data;
        Node *temp = front;

        if (front->next)
        {
            front = (front->next);
        }

        else
        {
            front = rear = NULL;
        }

        delete temp;
        return ret;
    }

    else
        return -1;
}