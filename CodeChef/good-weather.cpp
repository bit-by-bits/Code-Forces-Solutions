#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string ans;

    while (t--)
    {
        int n = 7, sun = 0, rain = 0;
        while (n--)
        {
            int cond;
            cin >> cond;

            switch (cond)
            {
            case 0: rain++;
                break;

            case 1: sun++;
                break;
            }
        }

        if (sun > rain) ans = "YES";
        else ans = "NO";

        cout << ans << '\n';
    }

    return 0;
}