// bool isCircular(Node *head)
// {
//     // Iterative approach
//     if (head == NULL)
//         return true;
//     Node *curr = head->next;
//     while (curr != NULL && curr->data != 0)
//     {
//         if (curr == head)
//             return true;
//         curr->data = 0;
//         curr = curr->next;
//     }
//     return false;
// }

#include <bits/stdc++.h>
/*************************************************
        Following is the structure of class Node:

        class Node{
        public:
            int data;
            Node* next;

            Node(int data){
                this->data = data;
                this->next = NULL;
            }

        }
**************************************************/

bool isCircular(Node *head)
{

    if (head == NULL)
    {
        return true;
    }

    if (head->next == head)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (slow->next != NULL && fast->next != NULL)
    {

        if (fast == NULL || fast->next->next == NULL || slow == NULL)
        {
            return false;
        }

        if (fast == slow)
        {

            while (slow->next != fast)
            {
                if (slow == head || slow->next == head)
                {
                    return true;
                }

                slow = slow->next;
            }

            return false;
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return false;
}