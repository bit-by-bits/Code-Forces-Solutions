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
        int x, y;
        cin >> x >> y;

        if (x == y)
            cout << "Rox" << '\n';
        else
            cout << "Min" << '\n';
    }

    return 0;
}