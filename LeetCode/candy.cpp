class Solution
{
public:
    int candy(vector<int> &ratings)
    {

        int N = ratings.size();
        vector<int> store(N, 1);

        for (int i = 1; i < N; i++)
        {
            if (ratings[i] > ratings[i - 1] && store[i] <= store[i - 1])
                store[i] = store[i - 1] + 1;
        }

        for (int i = N - 2; i > -1; i--)
        {
            if (ratings[i] > ratings[i + 1] && store[i] <= store[i + 1])
                store[i] = store[i + 1] + 1;
        }

        return accumulate(store.begin(), store.end(), 0);
    }
};