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
        string s;
        cin >> s;

        cout << (!(s.length() % 2) && !(s.substr(0, s.length() / 2).compare(s.substr(s.length() / 2, s.length() / 2))) ? "YES" : "NO") << '\n';
    }

    return 0;
}