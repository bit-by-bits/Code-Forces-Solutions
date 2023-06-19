#include <bits/stdc++.h>
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
#include <unordered_map>

Node *removeDuplicates(Node *head)
{
    unordered_map<int, bool> store;

    Node *PREV = head;
    Node *CURR = head;

    while (CURR != NULL)
    {

        if (store[CURR->data])
        {
            PREV->next = CURR->next;

            Node *DEL = CURR;
            delete (DEL);

            CURR = PREV->next;
        }

        else
        {
            store[CURR->data] = true;

            PREV = CURR;
            CURR = CURR->next;
        }
    }

    return head;
}