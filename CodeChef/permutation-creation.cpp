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
        int n;
        cin >> n;

        if (n < 4)
            cout << -1 << '\n';
        else if (n == 4)
            cout << "3 1 4 2" << '\n';
        else
        {
            int arr[n], index = 0;
            for (int i = 1; i <= n; i++)
                arr[i - 1] = i;

            for (int i = 1; i <= n / 2; i++)
                cout << arr[index] << ' ' << arr[index++ + (int)ceil((double)n / 2)] << ' ';

            if (n % 2)
                cout << arr[index];
            cout << '\n';
        }
    }

    return 0;
}