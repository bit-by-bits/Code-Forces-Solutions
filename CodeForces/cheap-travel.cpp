#include <iostream>
#include <iomanip>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    double a, b;
    cin >> n >> m >> a >> b;

    int k = n % m;
    int l = ((n >= m) ? (n - k) : (0));
    cout << fixed << setprecision(0) << min(k * a, b) + l * min(a, b / m) << '\n';

    return 0;
}