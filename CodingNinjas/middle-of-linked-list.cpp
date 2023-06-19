// #include <cmath>

// Node *findMiddle(Node *head)
// {

//     int len = 0;
//     Node *ptr = head;

//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//         len++;
//     }

//     len = ceil(len / 2.0);
//     while (len)
//     {
//         head = head->next;
//         len--;
//     }

//     return head;
// }

Node *findMiddle(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *temp1 = head;

    Node *temp2 = head;

    while (temp1 != NULL && temp1->next != NULL)

    {

        temp1 = temp1->next->next;

        temp2 = temp2->next;
    }

    return temp2;
}