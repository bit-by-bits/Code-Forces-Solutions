#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n] = {0}, b[n] = {0}, c[n] = {0}, ans = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (i != j && (a[i] > a[j] || b[i] > b[j])) c[i]++;

        int maxm = *max_element(c, c + n);
        for (int i = 0; i < n; i++) if (c[i] == maxm) ans++;

        cout << ans % 1000000007 << '\n';
    }
    
    return 0;
}