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
        int a, b, c, k, ans;
        cin >> a >> b >> c;

        if (c > b)
            k = c - b;
        else
            k = b - c;

        if ((a - 1) < (k + c - 1))
            ans = 1;
        else if ((a - 1) > (k + c - 1))
            ans = 2;
        else
            ans = 3;

        cout << ans << '\n';
    }

    return 0;
}