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
        int n, ans = 0, m, odd = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> m;
            if (m % 2 == 1) odd++;
        }

        if (n != 1 && (odd % 2 == 1)) ans = 2;
        else ans = 1;

        cout << ans << '\n';
    }

    return 0;
}