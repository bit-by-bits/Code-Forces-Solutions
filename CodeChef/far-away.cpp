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
        int n, ans = 0;
        double m;
        cin >> n >> m;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > (m + 1) / 2)
                ans += (arr[i] - 1);
            else
                ans += (m - arr[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}