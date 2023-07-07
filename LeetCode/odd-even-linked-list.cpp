class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {

        ListNode *hodd = NULL, *heve = NULL;
        ListNode *todd = NULL, *teve = NULL;

        if (head)
            hodd = todd = head;
        else
            return head;

        if (head->next)
            heve = teve = head->next;
        else
            return head;

        bool odd = true;
        head = head->next->next;

        while (head)
        {
            if (odd)
            {
                todd->next = head;
                head = head->next;
                todd = todd->next;
                todd->next = NULL;
            }
            else
            {
                teve->next = head;
                head = head->next;
                teve = teve->next;
                teve->next = NULL;
            }
            odd = !odd;
        }

        head = hodd;
        todd->next = heve;
        teve->next = NULL;

        return head;
    }
};