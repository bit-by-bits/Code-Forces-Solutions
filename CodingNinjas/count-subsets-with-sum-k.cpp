int MOD = 1000000007;

int helper(vector<int> &arr, int n, int k, vector<vector<int>> &memo)
{

    if (n <= 0)
        return !k;
    if (memo[n][k] != -1)
        return memo[n][k];

    int x = helper(arr, n - 1, k, memo) % MOD;
    int y = (k < arr[n - 1]) ? 0 : helper(arr, n - 1, k - arr[n - 1], memo) % MOD;
    return memo[n][k] = (x + y) % MOD;
}

int findWays(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<vector<int>> memo(n + 1, vector<int>(k + 1, -1));
    return helper(arr, n, k, memo) % MOD;
}
