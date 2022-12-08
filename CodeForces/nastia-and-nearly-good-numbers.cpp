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
        int a, b;
        cin >> a >> b;

        if (b == 1)
            cout << "NO" << '\n';

        else if (b == 2)
            cout << "YES" << '\n'
                 << a * 1 << ' ' << a * 3 << ' ' << a * 4 << '\n';
        else
            cout << "YES" << '\n'
                 << a * 1 << ' ' << a * (b - 1) << ' ' << a * b << '\n';
    }

    return 0;
}