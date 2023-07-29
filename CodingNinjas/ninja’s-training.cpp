int rec(int n, int i, vector<vector<int>> &points, vector<vector<int>> &dp)
{

    if (!n) return n;
    if (dp[n][i] != -1) return dp[n][i];

    int mx = 0;
    int ans = points[n - 1][i - 1];

    if (i == 1) mx = max(rec(n - 1, 2, points, dp), rec(n - 1, 3, points, dp));
    else if (i == 2) mx = max(rec(n - 1, 1, points, dp), rec(n - 1, 3, points, dp));
    else if (i == 3) mx = max(rec(n - 1, 1, points, dp), rec(n - 1, 2, points, dp));

    return (dp[n][i] = ans + mx);
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n + 1, vector<int>(4, -1));
    
    int ans = 0;
    ans = max(ans, rec(n, 1, points, dp));
    ans = max(ans, rec(n, 2, points, dp));
    ans = max(ans, rec(n, 3, points, dp));

    return ans;
}