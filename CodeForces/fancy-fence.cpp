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
        int s;
        cin >> s;

        if (ceil(360.0 / (180 - s)) == (360.0 / (180 - s)))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}