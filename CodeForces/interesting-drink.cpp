#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vi x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x.begin(), x.end());

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;

        auto ans = upper_bound(x.begin(), x.end(), m);

        if (m < x[0])
        {
            cout << 0 << '\n';
            continue;
        }

        if (m >= x[n - 1])
        {
            cout << n << '\n';
            continue;
        }

        cout << ans - x.begin() << '\n';
    }

    return 0;
}