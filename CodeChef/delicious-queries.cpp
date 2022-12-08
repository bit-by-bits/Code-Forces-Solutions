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

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int q;
        cin >> q;

        while (q--)
        {
            int p, k, index = 0, sum = 0;
            cin >> p >> k;

            vector<pair<int, int>> temp;
            for (int i = 0; i < n; i++)
                if (!(arr[i] % p))
                    temp.push_back(make_pair(arr[i], i));

            sort(temp.begin(), temp.end());

            for (int i = 0; i < k; i++)
            {
                if (arr[i] % p)
                    sum += arr[i];
                else
                    sum += temp[temp.size() - index++ - 1].first;
            }

            cout << sum << "\n";
        }
    }

    return 0;
}