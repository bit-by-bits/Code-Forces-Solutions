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

        int ten = n % 10, seven = n % 7;

        if (seven)
        {
            if (ten < 3 + seven)
                cout << n + (7 - seven) << '\n';
            else
                cout << n - seven << '\n';
        }
        else
            cout << n << '\n';
    }

    return 0;
}