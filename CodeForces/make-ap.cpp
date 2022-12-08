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
        int a, b, c;
        cin >> a >> b >> c;

        if (a - b == b - c)
            cout << "1YES" << '\n';

        else if (!((a + c) % 2) && !((a + c) / 2) % b)
            cout << "2YES" << '\n';

        else if (!((2 * b - a) % c) || !((2 * b - c) % a))
            cout << "3YES" << '\n';

        else
            cout << "NO" << '\n';
    }

    return 0;
}