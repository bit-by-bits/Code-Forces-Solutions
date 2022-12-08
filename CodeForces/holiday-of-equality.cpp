#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, maxm = -1, ans = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxm = max(maxm, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += (maxm - arr[i]);
    }

    cout << ans << '\n';
    return 0;
}