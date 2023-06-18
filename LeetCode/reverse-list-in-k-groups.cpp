/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *reverse(Node *head, int k, int n)
{

    if (n < k)
        return head;

    Node *PREV = NULL;
    Node *CURR = head;
    Node *NEXT = head->next;

    for (int i = 0; i < k; i++)
    {
        CURR->next = PREV;
        PREV = CURR;
        CURR = NEXT;
        if (i < k - 1)
            NEXT = CURR->next;
    }

    NEXT = reverse(CURR, k, n - k);
    head->next = NEXT;

    return PREV;
}

Node *kReverse(Node *head, int k)
{
    int LENGTH = 1;
    Node *temp = head;

    while (temp->next != NULL)
    {
        LENGTH++;
        temp = temp->next;
    }

    return reverse(head, k, LENGTH);
}