#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int s, x;
        cin >> s;

        if (s >= 1900)
            x = 1;
        else if (s >= 1600)
            x = 2;
        else if (s >= 1400)
            x = 3;
        else
            x = 4;

        cout << "Division " << x << '\n';
    }

    return 0;
}