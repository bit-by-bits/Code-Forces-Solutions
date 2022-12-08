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
        int a, b;
        cin >> a >> b;

        if ((a % 2 && b % 2) || a == 1 || b == 1)
            cout << "No" << '\n';
        else
            cout << "Yes" << '\n';
            // if (!(a % 2 || b % 2))
    }

    return 0;
}