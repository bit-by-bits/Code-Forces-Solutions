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
        int n, odd = 0;
        cin >> n;

        int limit = 2 * n;
        while (limit--)
        {
            int a;
            cin >> a;

            if (a % 2)
                odd++;
        }

        cout << ((odd == n) ? "Yes" : "No") << '\n';
    }

    return 0;
}