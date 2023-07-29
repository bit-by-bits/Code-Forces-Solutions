/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    where 'N' is the number of staris in the staircase.
*/

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, -1);

    // Already at last stair.
    dp[n] = 0;

    // Only choice to take a single gap jump.
    dp[n - 1] = abs(heights[n - 2] - heights[n - 1]);

    for (int i = n - 2; i > -1; i--)
    {

        int oneJump = dp[i + 1] + abs(heights[i - 1] - heights[i]);
        int twoJump = dp[i + 2] + abs(heights[i - 1] - heights[i + 1]);

        dp[i] = min(oneJump, twoJump);
    }

    int ans = dp[1];
    return ans;
}