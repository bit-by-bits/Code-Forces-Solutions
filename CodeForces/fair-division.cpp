#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
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

        int one = 0, two = 0;
        while (n--)
        {
            int s;
            cin >> s;
            (s == 1) ? one++ : two++;
        }

        if ((one == 0 && two % 2) || (one % 2))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}