#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, s;
    cin >> m >> s;

    if ((s == 0 && m != 1) || s > m * 9)
        cout << "-1 -1" << '\n';

    else if (s == 0 && m == 1)
        cout << "0 0" << '\n';

    else
    {

        int arr1[m], arr2[m], zero;
        for (int i = m - 1; i >= 0; i--)
            arr1[i] = arr2[i] = 0;

        for (int i = m - 1; (s) && (i >= 0); i--)
        {
            if (s > 9)
            {
                arr1[i] += 9;
                arr2[i] += 9;
                s -= 9;
            }
            else
            {
                arr1[i] += s;
                arr2[i] += s;

                s = 0;
                zero = i;
            }
        }

        if (arr2[0] == 0)
        {
            arr2[0] = 1;
            arr2[zero]--;
        }

        for (int i = 0; i < m; i++)
            cout << arr2[i];

        cout << ' ' << '\n';

        for (int i = m - 1; i >= 0; i--)
            cout << arr1[i];
    }

    return 0;
}