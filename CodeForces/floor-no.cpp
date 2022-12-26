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
        double n, x, floor;
        cin >> n >> x;

        if (n == 1.0 || n == 2.0)
            floor = 1;
        else
            floor = ceil((n - 2.0) / x) + 1;

        cout << fixed << setprecision(0) << floor << '\n';
    }

    return 0;
}