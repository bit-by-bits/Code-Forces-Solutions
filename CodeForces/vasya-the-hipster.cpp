#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << min(a, b) << ' ' << (a + b - 2 * min(a, b)) / 2;

    return 0;
}