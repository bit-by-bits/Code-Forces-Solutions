vector<int> MinimumCoins(int n)
{
    vector<int> ans;
    vector<int> store;

    store = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    for (int i = 8; i > -1; i--)
    {
        if (store[i] > n)
            continue;
        for (int j = n / store[i]; j; j--)
            ans.push_back(store[i]);
        n %= store[i];
    }

    return ans;
}