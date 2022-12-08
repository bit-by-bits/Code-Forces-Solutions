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
        int n, k;
        cin >> n >> k;
        int extra = n % k;

        if (k > n)
        {
            cout << "NO" << '\n';
            continue;
        };

        if (k % 2)
        {
            if (extra % 2)
            {
                if (n / k == 1)
                    cout << "NO" << '\n';
                else
                {
                    cout << "YES" << '\n';
                    cout << n / k + 1 << ' ';
                    for (int i = 1; i < k; i++)
                    {
                        if (i % 2)
                            cout << n / k + 1 << ' ';

                        else
                            cout << n / k - 1 << ' ';
                    }
                    cout << '\n';
                }
            }
            else
            {
                cout << "YES" << '\n';
                for (int i = 0; i < k - extra / 2; i++)
                    cout << n / k << ' ';
                for (int i = 0; i < extra / 2; i++)
                    cout << n / k + 2 << ' ';
                cout << '\n';
            }
        }

        else
        {
            if (extra % 2)
                cout << "NO" << '\n';
            else
            {
                cout << "YES" << '\n';
                for (int i = 0; i < k - extra / 2; i++)
                    cout << n / k << ' ';
                for (int i = 0; i < extra / 2; i++)
                    cout << n / k + 2 << ' ';
                cout << '\n';
            }
        }
    }

    return 0;
}