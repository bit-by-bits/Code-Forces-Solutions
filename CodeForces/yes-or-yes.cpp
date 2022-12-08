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
        string s;
        cin >> s;

        if (s == "yes" || s == "yeS" || s == "yEs" || s == "Yes" || s == "yES" || s == "YeS" || s == "YEs" || s == "YES") cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}