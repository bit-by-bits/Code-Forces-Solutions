/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head)
{
    if (head == NULL)
        return head;

    int count[3] = {0};
    Node *CURR = head;
    while (CURR != NULL)
    {
        count[CURR->data]++;
        CURR = CURR->next;
    }

    int i = 0;
    CURR = head;
    while (i < 3)
    {
        int j = count[i];

        while (j--)
        {
            CURR->data = i;
            CURR = CURR->next;
        }

        i++;
    }

    // for (int i = 0; i < 3; i++) {

    //     for (int j = 0; j < count[i]; j++) {
    //         Node* newNode = new Node(i);

    //         if (i == 0 && j == 0) {
    //             CURR = newNode;
    //             head = CURR;
    //         }

    //         else {
    //             CURR -> next = newNode;
    //             CURR = CURR -> next;
    //         }
    //     }
    // }

    return head;
}