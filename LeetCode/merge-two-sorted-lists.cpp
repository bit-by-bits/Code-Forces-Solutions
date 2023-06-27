/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        ListNode *temp = NULL;
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;

        if (list1->val > list2->val)
        {
            temp = list2->next;

            list2->next = NULL;
            newHead = list2;
            newTail = list2;

            list2 = temp;
        }

        else
        {
            temp = list1->next;

            list1->next = NULL;
            newHead = list1;
            newTail = list1;

            list1 = temp;
        }

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val > list2->val)
            {
                temp = list2->next;

                list2->next = NULL;
                newTail->next = list2;
                newTail = list2;

                list2 = temp;
            }

            else
            {
                temp = list1->next;

                list1->next = NULL;
                newTail->next = list1;
                newTail = list1;

                list1 = temp;
            }
        }

        if (list1 != NULL)
        {
            newTail->next = list1;
        }

        if (list2 != NULL)
        {
            newTail->next = list2;
        }

        return newHead;
    }
};