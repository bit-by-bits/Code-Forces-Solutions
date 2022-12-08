#include <iostream>
#include <algorithm>
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
        int n;
        cin >> n;

        int arr[n];
        string ans = "YES";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n != 1)
        {
            sort(arr, arr + n);
            for (int i = 0; i < n-1; i++)
            {
                if (arr[i + 1] - arr[i] > 1)
                {
                    ans = "NO";
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}