#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, last = -1;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i + 2] == arr[i])
            {
                last = arr[i];
                cout << last << '\n';
                break;
            }
        }

        if (last == -1)
            cout << last << '\n';
    }

    return 0;
}