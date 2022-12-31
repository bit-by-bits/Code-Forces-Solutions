#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int s, index = 0;
        cin >> s;

        while (s % 2 == 0)
            s /= 2;
        if (s == 1)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}