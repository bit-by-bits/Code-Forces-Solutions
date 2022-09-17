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
        int n, pmin = 1000000001, pmax = -1, nmin = -1000000001, nmax = 1;
        bool plus = false, minus = false;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
            {
                plus = true;

                if (arr[i] >= pmax) pmax = arr[i];
                if (arr[i] <= pmin) pmin = arr[i];
            }
            else
            {
                minus = true;

                if (arr[i] <= nmax) nmax = arr[i];
                if (arr[i] >= nmin) nmin = arr[i];
            }
        }

        if (plus && minus) cout << min(nmin * nmin, min(pmin * pmin, pmax * nmax)) << ' ' << max(pmax * pmax, nmax * nmax) << '\n';
        
        else if (plus && !minus) cout << pmin * pmin << ' ' << pmax * pmax << '\n';
        
        else if (minus && !plus) cout << nmin * nmin << ' ' << nmax * nmax << '\n';
        
    }

    return 0;
}