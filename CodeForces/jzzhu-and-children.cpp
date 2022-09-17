#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, m, ans, div = 0, max = -1;
    cin >> n >> m;

    int need[n];
    for (int i = 0; i < n; i++)
    {
        cin >> need[i];
        if (div <= ceil(double(need[i]) / m))
        {
            ans = i + 1;
            max = need[i];
            div = ceil(double(need[i]) / double(m));
        }
    }

    if (max < m) cout << n << '\n';
    else cout << ans << '\n';

    return 0;
}