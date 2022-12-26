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
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];

        sort(arr, arr + 3);
        cout << ((arr[2] == arr[0] + arr[1]) ? "YES" : "NO") << '\n';
    }

    return 0;
}