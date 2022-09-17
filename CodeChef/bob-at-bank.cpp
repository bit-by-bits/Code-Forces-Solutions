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
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        cout << (x - y) * z + w << '\n';
    }

    return 0;
}