#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, count = 0;
    cin >> t;

    vi a(t), b(t);
    for (int i = 0; i < t; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    for (int i = 0; i < t; i++)
        if (!flag[a[i]])
            flag[a[i]] = 1;

    for (int i = 0; i <= maxm; i++)
        if (flag[i])
            count++;

    cout << count << '\n';
    return 0;
}