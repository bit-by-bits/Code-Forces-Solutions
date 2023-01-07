#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    for (int i = 0; i < m; i++)
    {
        if (arr[i] >= 0)
            break;
        else
            (sum += arr[i]);
    }

    cout << -sum << '\n';
    return 0;
}