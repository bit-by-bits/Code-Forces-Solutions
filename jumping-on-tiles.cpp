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
        string a;
        cin >> a;

        const int len = a.length();
        bool flag = true;
        char b[len];

        for (int i = 0; i < len; i++)
            b[i] = a[i];
        sort(b, b + len);
        // for (int i = 0; i < len; i++)
        //     cout<< b[i];
        cout << '\n';

        int j, k, extra = 1, ans[len] = {0};
        for (int i = 0; i < len; i++)
        {
            if (b[i] == a[0])
            {
                j = i;
                break;
            }
        }
        for (int i = len - 1; i >= 0; i--)
        {
            if (b[i] == a[len - 1])
            {
                k = i;
                break;
            }
        }

        int temp = j;

        if (a[len - 1] > a[0])
        {
            cout << a[len - 1] - a[0] << ' ';

            while (flag)
            {
                for (int i = 0; i < len; i++)
                {
                    if (a[i] == 'A')
                        continue;

                    else if (a[i] == b[j] && i!=k)
                    {
                        ans[j - temp] = i + 1;
                        a[i] = 'A';
                        j++;
                        extra++;
                        // continue;
                    }

                    if (j == k)
                        break;
                }

                if (j == k)
                    flag = false;
            }

            cout << extra << '\n';

            for (int i = 0; i < len; i++)
            {
                if (ans[i] == 0)
                    break;
                cout << ans[i] << ' ';
            }

            cout << len << '\n';
        }

        // else
        // {
        //     cout << a[0] - a[len - 1] << ' ';

        //     while (flag)
        //     {
        //         for (int i = 0; i < len; i++)
        //         {
        //             if (a[i] == 'A')
        //                 continue;

        //             else if (a[i] == b[j])
        //             {
        //                 ans[j - temp] = i + 1;
        //                 a[i] = 'A';
        //                 j--;
        //                 extra++;
        //             }

        //             if (j == k)
        //                 break;
        //         }

        //         if (j == k)
        //             flag = false;
        //     }

        //     cout << extra << '\n'
        //          << 1 << ' ';

        //     for (int i = 0; i < len; i++)
        //     {
        //         cout << ans[i] << ' ';
        //         if (ans[i] == 0)
        //             break;
        //     }
        // }

        cout << '\n';
    }

    return 0;
}