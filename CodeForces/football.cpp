#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, max = -1;
    string winner;
    cin >> t;

    map<string, int> goals;
    while (t--)
    {
        string s;
        cin >> s;

        goals[s]++;
        if (goals[s] > max)
        {
            winner = s;
            max = goals[s];
        }
    }

    cout << winner << '\n';
    return 0;
}