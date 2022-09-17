#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + n);

        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[n - i - 1])
                a[i] = b[n - i - 1];
        }

        for (int i = 0; i < n; i++)
            ans += a[i];
        cout << ans << endl;
    }

    return 0;
}