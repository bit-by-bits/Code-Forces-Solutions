#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n, m;

    int a[n], b[m], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cin >> b[i];
    //     int temp = 0;

    //     for (int j = 0; j < n; j++)
    //         if (a[j] % b[i] == 0)
    //             temp += a[j];

    //     cout << temp << '\n';
    //     if (i % 2)
    //         sum -= max(temp, sum - temp);
    //     else
    //         sum -= min(temp, sum - temp);
    // }

    cout << sum << '\n';
    return 0;
}