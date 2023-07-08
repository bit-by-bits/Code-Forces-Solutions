class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node *str = head;
        Node *end = head;
        while (end->next)
            end = end->next;

        vector<pair<int, int>> ans;
        while (str->data < end->data)
        {

            int val = str->data + end->data;

            if (val > target)
                end = end->prev;
            else if (val < target)
                str = str->next;
            else
            {
                ans.push_back({str->data, end->data});
                str = str->next;
                end = end->prev;
            }
        }

        return ans;
    }
};