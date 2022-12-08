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

        switch (n % 3)
        {
        case 2:
            cout << (n - 1) / 3 + 1 << ' ' << (n - 1) / 3 + 2 << ' ' << (n - 1) / 3 - 1 << ' ' << '\n';
            break;

        case 1:
            cout << n / 3 << ' ' << n / 3 + 2 << ' ' << n / 3 - 1 << ' ' << '\n';
            break;

        case 0:
            cout << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 - 1 << ' ' << '\n';
            break;
        }
    }

    return 0;
}