#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    char pointer = 'a';
    int limit = s.length(), ans = 0;
    for (int a = 0; a < limit; a++)
    {
        const int diff = abs(pointer - s[a]);
        if (diff < 13) ans += diff;
        else ans += 26 - diff;

        pointer = s[a];
    }
    
    cout << ans << '\n';
    return 0;
}