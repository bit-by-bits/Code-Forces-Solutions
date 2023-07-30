typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#include <bits/stdc++.h>
int knapsack(vector<int> weight, vector<int> value, int N, int S)
{

    vvi sums(N + 1, vi(S + 1));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= S; j++)
        {

            int one = -1;
            int two = sums[i - 1][j];

            if (j >= weight[i - 1])
                one = sums[i - 1][j - weight[i - 1]] + value[i - 1];
            sums[i][j] = max(one, two);
        }
    }

    return sums[N][S];
}