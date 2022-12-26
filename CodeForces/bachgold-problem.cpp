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

    const int ans = n / 2;
    cout << ans << '\n';

    if (n % 2)
    {
        for (int a = 0; a < ans - 1; a++)
            cout << 2 << ' ';
        cout << 3;
    }
    else
    {
        for (int a = 0; a < ans; a++)
            cout << 2 << ' ';
    }
    return 0;
}