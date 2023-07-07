class Solution
{
public:
    bool check(vector<int> weights, int mid, int days)
    {
        int total = 1, count = 0;
        int SIZE = weights.size();

        for (int i = 0; i < SIZE; i++)
        {
            if (weights[i] > mid)
                return false;

            if (count + weights[i] > mid)
            {
                count = weights[i];
                total++;
            }
            else
                count += weights[i];

            if (total > days)
                return false;
        }

        return true;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {

        int str = 1;
        int end = accumulate(weights.begin(), weights.end(), 0);

        int res = end;
        while (str <= end)
        {
            int mid = str + (end - str) / 2;
            if (check(weights, mid, days))
            {
                res = mid;
                end = mid - 1;
            }
            else
                str = mid + 1;
        }

        return res;
    }
};