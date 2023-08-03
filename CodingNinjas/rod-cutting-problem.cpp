typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#include <bits/stdc++.h>

int cutRod(vector<int> &price, int N)
{

    vvi sums(N + 1, vi(N + 1));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {

            int one = j >= i ? sums[i][j - i] + price[i - 1] : -1;
            int two = sums[i - 1][j];
            sums[i][j] = max(one, two);
        }
    }

    return sums[N][N];
}