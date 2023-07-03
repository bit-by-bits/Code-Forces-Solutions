class Solution
{
public:
    Node *constructDLL(vector<int> &arr)
    {

        Node *head = NULL;
        Node *curr = NULL;

        Node *temp = new Node(arr.front());
        head = curr = temp;

        curr->prev = NULL;
        curr->next = NULL;

        int SIZE = arr.size();
        for (int i = 1; i < SIZE; i++)
        {
            Node *temp = new Node(arr[i]);
            temp->prev = curr;
            temp->next = NULL;

            curr->next = temp;
            curr = temp;
        }

        return head;
    }
};