#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int a, b, c, ans = 0;
        cin >> a >> b;

        if (b > a) c = b - a;
        else c = a - b;

        if (c % 10) ans += 1;
        ans += c / 10;

        cout << ans << '\n';
    }

    return 0;
}