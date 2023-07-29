int minimizeCost(int n, int k, vector<int> &height)
{

    vector<int> costs(n, 0);

    for (int i = n - 1; i > -1; i--)
    {

        int minm = INT_MAX;
        for (int j = 1; j <= k && i + j < n; j++)
        {
            int temp = abs(height[i + j] - height[i]) + costs[i + j];
            minm = min(minm, temp);
        }

        if (minm != INT_MAX)
            costs[i] = minm;
    }

    return costs[0];
}