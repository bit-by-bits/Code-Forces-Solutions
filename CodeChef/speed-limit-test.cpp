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
        string ans;
        double a, x, b, y;
        cin >> a >> x >> b >> y;

        if (a / x == b / y) ans = "Equal";
        else if (a / x > b / y) ans = "Alice";
        else ans = "Bob";

        cout << ans << '\n';
    }

    return 0;
}