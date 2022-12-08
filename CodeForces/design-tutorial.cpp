#include <iostream>
#define int long long
using namespace std;

bool check(int n)
{
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 4;
    cin >> n;

    while (check(n - i)) i += 2;
    cout << i << ' ' << n - i << '\n';
    return 0;
}