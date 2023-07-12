class Solution
{
public:
    Node *constructLL(vector<int> &arr)
    {

        Node *head = NULL;
        Node *curr = NULL;

        Node *temp = new Node(arr.front());
        head = curr = temp;
        curr->next = NULL;

        int SIZE = arr.size();
        for (int i = 1; i < SIZE; i++)
        {
            Node *temp = new Node(arr[i]);
            curr->next = temp;

            curr = curr->next;
            curr->next = NULL;
        }

        return head;
    }
};