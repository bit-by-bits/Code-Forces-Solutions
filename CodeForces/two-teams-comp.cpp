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

        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[temp]++;
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << '\n';
    }

    return 0;
}