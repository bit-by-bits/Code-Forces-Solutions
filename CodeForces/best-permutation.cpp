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

        if (n == 1) cout << 1 << '\n';
        else if (n == 2) cout << 1 << ' ' << 2 << '\n';
        else if (n == 3) cout << 2 << ' ' << 1 << ' ' << 3 << '\n';
        
        else if (n % 2 == 0)
        {
            for (int i = n - 2; i > 0; i--)
                cout << i << ' ';
            cout << n - 1 << ' ' << n << '\n';
        }
        else
        {
            cout << n - 1 << ' ';
            for (int i = n - 3; i > 0; i--)
                cout << i << ' ';
            cout << n - 2 << ' ' << n << '\n';
        }
    }

    return 0;
}