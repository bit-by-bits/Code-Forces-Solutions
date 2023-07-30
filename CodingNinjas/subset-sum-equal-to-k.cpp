int helper(vector<int> &arr, int n, int k, vector<vector<int>> &memo)
{

    if (n <= 0)
        return !k;
    if (memo[n][k] != -1)
        return memo[n][k];

    int x = helper(arr, n - 1, k, memo);
    int y = (k - arr[n - 1] < 0) ? 0 : helper(arr, n - 1, k - arr[n - 1], memo);
    return memo[n][k] = x || y;
}

bool subsetSumToK(int n, int k, vector<int> &arr)
{

    vector<vector<int>> memo(n + 1, vector<int>(k + 1, -1));
    return helper(arr, n, k, memo);
}
