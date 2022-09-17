#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(const int array[], int n)
{
    const int first = array[0];
    for (int i = 1; i < n; i++) if (array[i] != first) return false;

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, temp;
        cin >> n;

        int arr[n], ans;
        bool flag = true;

        cin >> arr[0];
        temp = arr[0];

        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            temp = arr[0];

            if (flag && arr[i] == temp)
            {
                temp = arr[i];
            }
            else
            {
                flag = false;
                temp = -1;
            }
        }

        int maxm = *max_element(arr, arr + n);

        if (check(arr, n))
            ans = 0;
        else if (maxm == arr[n - 1])
            ans = 1;
        else
            ans = 2;

        cout << ans << '\n';
    }

    return 0;
}