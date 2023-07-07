class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *curr1 = l1;
        ListNode *curr2 = l2;

        ListNode *l3 = new ListNode(-1);
        ListNode *curr3 = l3;

        bool carry = false;

        while (curr1 || curr2)
        {

            int add = carry;
            if (curr1)
            {
                add += (curr1->val);
                curr1 = curr1->next;
            }
            if (curr2)
            {
                add += (curr2->val);
                curr2 = curr2->next;
            }

            curr3->next = new ListNode(add % 10);
            curr3 = curr3->next;

            if (add > 9)
                carry = true;
            else
                carry = false;
        }

        if (carry)
            curr3->next = new ListNode(1);

        curr3 = l3->next;
        l3->next = NULL;

        delete l3;
        return curr3;
    }
};