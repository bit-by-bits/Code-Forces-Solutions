#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

string check(string s1, string s2)
{
    for (int a = 0; a < s1.length(); a++)
        if ((s1[a] == 'R' && (s2[a] == 'G' || s2[a] == 'B')) || (s2[a] == 'R' && (s1[a] == 'G' || s1[a] == 'B')))
            return "NO";

    return "YES";
}

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

        string s1, s2;
        cin >> s1 >> s2;

        cout << check(s1, s2) << '\n';
    }

    return 0;
}