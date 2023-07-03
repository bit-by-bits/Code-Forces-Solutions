class Solution
{
public:
    void deleteNode(ListNode *node)
    {

        ListNode *last = node;
        node = node->next;

        while (true)
        {

            last->val = node->val;
            if (node->next == NULL)
                break;

            last = node;
            node = node->next;
        }

        delete node;
        last->next = NULL;
    }
};