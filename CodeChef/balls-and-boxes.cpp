#include <iostream>
#include <cmath>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        long double n, k;
        cin >> n >> k;
        int x = n, y = k;

        int ans[y];
        if (x % 2 == 0 && y % 2 == 0)
        {
            for (int a = 0; a < k / 2; a++)
            {
                ans[a] = floor(n / k) - a;
                ans[y - a] = ceil(n / k) + a;

                if (ans[a] < 1 || ans[y - a] < 1)
                {
                    cout << "NO" << '\n';
                    break;
                }
                
                cout << ans[a] << ' ' << ans[y - a] << '\n';
            }

            cout << endl;
        }
    }

    return 0;
}