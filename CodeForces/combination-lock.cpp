#include <iostream>
#include <cstdlib>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ans = 0;
    cin >> t;

    string current, final;
    cin >> current >> final;

    for (int i = 0; i < t; i++)
    {
        if (labs(final[i] - current[i]) < 5)
            ans += labs(final[i] - current[i]);
        else
            ans += (-labs(final[i] - current[i]) + 10);
    }

    cout << ans << '\n';
    return 0;
}