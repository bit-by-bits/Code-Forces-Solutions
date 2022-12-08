#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
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
        string n;
        cin >> n;

        int len = n.length(), temp1 = 0, temp2 = 0, key, ans = 9 * (len - 1);
        long double add = 0.1;

        for (int i = 0; i < len; i++)
        {
            temp2 += (add *= 10);
            temp1 += (add * (int)(n[len - i - 1] - '0'));
        }

        for (key = 1; key <= 9; key++)
            if (temp1 < key * temp2)
                break;

        ans += --key;

        cout << ans << '\n';
    }

    return 0;
}