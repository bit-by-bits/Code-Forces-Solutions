#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
        if (result == 1)
            return 1;
    }
    return result;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string ans = "NO";

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        const int gcd = findGCD(arr, n);
        int length = 1, count = 0;

        for (int i = 0; i < n; i++)
            arr[i] /= gcd;

        for (int i = 0; i < n;)
        {
            if (i + length <= n && findGCD(arr + i, length) == 1)
            {
                count++;
                i += length;
                length = 1;
            }
            else
            {
                length++;
            }

            if (i + length >= n)
            {
                i++;
                length = 1;
            }
        }

        if (count >= k)
            ans = "YES";
        cout << ans << '\n';
    }

    return 0;
}