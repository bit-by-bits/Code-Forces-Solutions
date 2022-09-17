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
        int n;
        cin >> n;

        for (int a = 10000; a > 10000 - n; a--) cout << a << ' ';

        cout << '\n';
    }

    return 0;
}