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
        string a;
        cin >> a;

        cout << a[0];
        for (int i = 1; i < a.length(); i++) if (i % 2 == 1) cout << a[i];
        
        cout << '\n';
    }

    return 0;
}