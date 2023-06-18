#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    NEXTlate <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *CURR)
{
    if (CURR == NULL || CURR->next == NULL)
    {
        return CURR;
    }

    LinkedListNode<int> *PREV = NULL;
    LinkedListNode<int> *HEAD = CURR;
    LinkedListNode<int> *NEXT = CURR->next;

    while (NEXT != NULL)
    {
        HEAD->next = PREV;
        PREV = HEAD;
        HEAD = NEXT;
        NEXT = HEAD->next;
    }

    HEAD->next = PREV;
    return HEAD;
}