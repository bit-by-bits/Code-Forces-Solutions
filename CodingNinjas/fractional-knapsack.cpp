#include <bits/stdc++.h>
double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    vector<vector<double>> store;
    for (auto x : items)
        store.push_back({(double)x.first, (double)x.second});

    sort(store.begin(), store.end(), [](vector<double> a, vector<double> b)
         { return b[1] / b[0] < a[1] / a[0]; });

    int sum = 0;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + store[i][0] <= w)
            sum += store[i][0], ans += store[i][1];
        else
        {
            ans += store[i][1] * ((double)(w - sum) / store[i][0]);
            break;
        }
    }

    return ans;
}