/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *removeDuplicates(Node *head)
{

    Node *CURR = head;
    Node *NEXT = head->next;

    while (NEXT != NULL)
    {
        if (NEXT->data == CURR->data)
        {

            if (NEXT->next == NULL)
            {
                CURR->next = NULL;
                return head;
            }

            else
            {
                CURR->next = NEXT->next;
                NEXT->next->prev = CURR;
            }

            NEXT->next = NULL;
            NEXT->prev = NULL;

            NEXT = CURR->next;
        }

        else
        {
            CURR = NEXT;
            NEXT = NEXT->next;
        }
    }

    return head;
}
