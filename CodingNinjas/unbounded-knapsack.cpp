typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#include <bits/stdc++.h>

int unboundedKnapsack(int N, int W, vector<int> &profit, vector<int> &weight)
{

    vvi sums(N + 1, vi(W + 1));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {

            int one = -1;
            int two = sums[i - 1][j];

            if (j >= weight[i - 1])
                one = sums[i][j - weight[i - 1]] + profit[i - 1];
            sums[i][j] = max(one, two);
        }
    }

    return sums[N][W];
}