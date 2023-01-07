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

        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        else if (n % 3)
        {
            cout << -1 << '\n';
            continue;
        }
        else
        {
            int count = 0;
            while (n % 3 == 0)
            {
                (n % 6) ? (n *= 2) : (n /= 6);
                count++;
            }

            cout << ((n == 1) ? count : -1) << '\n';
        }
    }

    return 0;
}