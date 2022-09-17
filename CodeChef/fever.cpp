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
        int temp;
        cin >> temp;

        cout << ((temp > 98) ? "YES" : "NO") << '\n';
    }

    return 0;
}