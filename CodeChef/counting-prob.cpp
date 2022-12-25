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

    int arr1[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr1[i];

        int arr2[arr1[i]], odd = 0;
        for (int j = 0; j < arr1[i]; j++)
        {
            cin >> arr2[j];
            arr2[j] % 2 && odd++;
        }

        cout << ((odd % 2) ? "NO" : "YES") << '\n';
    }

    return 0;
}