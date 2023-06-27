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
private:
    ListNode *reverse(ListNode *head)
    {

        ListNode *PREV = NULL;
        ListNode *CURR = head;
        ListNode *NEXT = head->next;

        while (NEXT != NULL)
        {
            CURR->next = PREV;

            PREV = CURR;
            CURR = NEXT;
            NEXT = NEXT->next;
        }

        CURR->next = PREV;
        return CURR;
    }

public:
    ListNode *reverseList(ListNode *head)
    {
        if (head != NULL)
        {
            head = reverse(head);
        }

        return head;
    }
};