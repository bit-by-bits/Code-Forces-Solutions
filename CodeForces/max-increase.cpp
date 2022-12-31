#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, inc = 1;
    cin >> t;

    vector<pair<int, int>> vec;
    for (int a = 0; a < t; a++)
    {
        int b;
        cin >> b;
        vec.push_back(make_pair(1, b));
    }

    for (int a = 1; a < t; a++)
    {
        if (vec[a - 1].second < vec[a].second)
            inc++;
        else
            inc = 1;
        vec[a].first = inc;
    }

    sort(vec.begin(), vec.end());
    cout << vec[t-1].first << '\n';
    return 0;
}