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
        int T, maxm = 0, ans;
        cin >> T;

        int cnt[T];
        for (int i = 0; i < T; i++)
        {
            cin >> cnt[i];
            if (cnt[i] > maxm)
            {
                ans = i + 1;
                maxm = cnt[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}