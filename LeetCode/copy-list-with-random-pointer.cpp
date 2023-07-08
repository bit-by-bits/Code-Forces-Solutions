class Solution
{
private:
    int dist(Node *head, Node *loc)
    {

        if (!loc)
            return -1;

        int ahead = 0;
        Node *curr = head;
        while (curr != loc)
            curr = curr->next, ahead++;

        return ahead;
    }

    Node *find(Node *head, int ahead)
    {

        if (ahead == -1)
            return NULL;

        Node *curr = head;
        for (int i = 0; i < ahead; i++)
            curr = curr->next;
        return curr;
    }

public:
    Node *copyRandomList(Node *head)
    {

        if (!head)
            return head;

        Node *init = new Node(-1);

        Node *curr1 = head;
        Node *curr2 = init;
        vector<int> rand;

        while (curr1)
        {
            curr2->next = new Node(curr1->val);
            rand.push_back(dist(head, curr1->random));

            curr2 = curr2->next;
            curr1 = curr1->next;
        }

        init = init->next;
        curr1 = head;
        curr2 = init;

        int i = 0;
        while (curr2)
        {
            Node *temp = find(init, rand[i++]);
            if (temp)
                curr2->random = temp;
            curr2 = curr2->next;
        }

        return init;
    }
};