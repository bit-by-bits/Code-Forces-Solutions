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
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i <= n-3; i++)
        {
            ans = max(ans, arr[i] + arr[i + 1] + arr[i + 2]);
        }

        cout << ans << '\n';
    }

    return 0;
}