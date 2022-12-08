#include <iostream>
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

        long double a[n], p[n], ans = -1, maxm = -1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> p[i];

        for (int i = 0; i < n; i++)
        {
            if (p[i] / a[i] > maxm)
            {
                maxm = p[i] / a[i];
                ans = i + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}