#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        int first = 0, second = 0;
        for (int a = 0; a < 3; a++)
            first += (s[a] - '0');
        for (int a = 0; a < 3; a++)
            second += (s[s.length() - 1 - a] - '0');

        s = "NO";
        if (first == second) s = "YES";
        cout << s << '\n';
    }

    return 0;
}