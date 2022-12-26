#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<vector<int>> accounts;
    for (int a = 0; a < m; a++)
    {
        vector<int> temp_VECTOR;
        for (int b = 0; b < n; b++)
        {
            int temp_INT;
            cin >> temp_INT;
            temp_VECTOR.push_back(temp_INT);
        }

        accounts.push_back(temp_VECTOR);
    }

    int max, temp_MAX;
    max = temp_MAX = 0;
    for (int a = 0; a < m; a++)
    {
        temp_MAX = 0;
        for (int b = 0; b < n; b++)
            temp_MAX += accounts[a][b];

        (temp_MAX > max) && (max = temp_MAX);
    }

    return max;
}