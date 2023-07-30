typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#include <bits/stdc++.h>

int MOD = 1000000007;

int countPartitions(int N, int D, vector<int> &nums)
{

    int S = accumulate(nums.begin(), nums.end(), 0);
    if ((S - D) % 2 || S < D)
        return 0;

    vvi sums(N + 1, vi(S + 1, 0));
    sums[0][0] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            sums[i][j] = j >= nums[i - 1] ? sums[i - 1][j - nums[i - 1]] % MOD : 0;
            sums[i][j] += sums[i - 1][j] % MOD;
        }
    }

    return sums[N][(S - D) / 2] % MOD;
}