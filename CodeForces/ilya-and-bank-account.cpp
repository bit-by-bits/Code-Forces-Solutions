#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 0)
    {
        cout << max(n / 10, n / 10 + n % 10 - (n / 10) % 10) << '\n';
    }
    else
        cout << n << '\n';

    return 0;
}