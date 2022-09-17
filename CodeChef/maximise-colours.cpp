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
        int ans = 0, primary[3] = {0}, extra[3] = {0}, secondary[3] = {0};

        for (int i = 0; i < 3; i++)
        {
            cin >> primary[i];

            if (primary[i] > 1)
            {
                extra[i] = primary[i] - 1;
                primary[i] = 1;
            }

            else if (primary[i] < 1)
            {
                extra[i] = primary[i] = 0;
            }
        }

        sort(extra, extra + 3);        

        if (extra[2] > 0 && extra[0] > 0)
        {
            secondary[2] = 1;
            extra[2]--;
            extra[0]--;
        }

        if (extra[1] > 0 && extra[2] > 0)
        {
            secondary[1] = 1;
            extra[1]--;
            extra[2]--;
        }

        if (extra[0] > 0 && extra[1] > 0)
        {
            secondary[0] = 1;
            extra[0]--;
            extra[1]--;
        }

        for (int i = 0; i < 3; i++)
        {
            ans += (primary[i] + secondary[i]);
        }

        // for (int i = 0; i < 3; i++)
        // {
        //     cout<<primary[i]<<' '<<secondary[i]<<' '<<extra[i]<<'\n';
        // }

        cout << ans << '\n';
    }

    return 0;
}