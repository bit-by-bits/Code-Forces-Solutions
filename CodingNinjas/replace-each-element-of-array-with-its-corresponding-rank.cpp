#include <bits/stdc++.h>
vector<int> replaceWithRank(vector<int> &arr, int n)
{

    vector<pair<int, int>> temp;
    for (int i = 0; i < n; i++)
        temp.push_back({arr[i], i});
    sort(temp.begin(), temp.end());

    int rank = 1;
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        if (temp[i - 1].first != temp[i].first)
            rank++;
        ans[temp[i].second] = rank;
    }

    return ans;
}