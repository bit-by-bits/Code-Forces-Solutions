class Stack
{
private:
    int size;
    Node *head;

public:
    Stack()
    {
        size = 0;
        head = new Node(-1);
        head->next = NULL;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return !size;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;

        size++;
        head = temp;
    }

    void pop()
    {
        if (size)
        {
            Node *temp = head;
            head = head->next;

            size--;
            delete temp;
        }
    }

    int getTop()
    {
        return size ? head->data : -1;
    }
};