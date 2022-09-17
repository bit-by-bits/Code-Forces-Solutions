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
        int a;
        cin >> a;

        if (a > 50)
            cout << "RIGHT" << '\n';
        else
            cout << "LEFT" << '\n';
    }

    return 0;
}