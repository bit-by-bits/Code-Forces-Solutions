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
        int n, odd = 0;
        bool flag = false;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                odd++;
        }

        if (odd % 2)
        {
            sort(arr, arr + n);
            for (int i = 1; i < n; i++)
                if (arr[i] - arr[i - 1] == 1)
                {
                    flag = true;
                    break;
                }

            if (flag)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
            cout << "YES" << '\n';
    }

    return 0;
}