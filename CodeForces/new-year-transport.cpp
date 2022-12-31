#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    int arr[n - 1], state = 1;
    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    while (state != t)
    {
        if (state == n)
        {
            cout << "NO\n";
            return 0;
        }
        else
            state += arr[state-1];
    }

    cout << "YES\n";
    return 0;
}