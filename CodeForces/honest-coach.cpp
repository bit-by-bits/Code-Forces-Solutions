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

        int temp[n], diff = 10000;
        for (int i = 0; i < n; i++)
            cin >> temp[i];

        sort(temp, temp + n);
        for (int i = 1; i < n; i++)
            if (temp[i] - temp[i - 1] < diff)
                diff = temp[i] - temp[i - 1];
        
        cout << diff << '\n';
    }

    return 0;
}