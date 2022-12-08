#include <cmath>
#include <algorithm>
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
        int n, ans;
        cin >> n;

        long double more, less, sum, arr[n];

        more = less = ans = sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        double avg = sum / n;
        if (floor(avg) != ceil(avg))
            cout << -1 << '\n';
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] < avg)
                    less += (avg - arr[i]);
                else if (arr[i] > avg)
                {
                    more += (arr[i] - avg);
                    ans++;
                }
            }

            if (less != more)
                cout << -1 << '\n';
            else
                cout << ans << '\n';
        }
    }

    return 0;
}