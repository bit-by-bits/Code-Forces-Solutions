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
        int n, k;
        cin >> n >> k;

        if (k / n == 0)
            k *= (int)ceil((float)n / k);
        cout << ((k % n) ? k / n + 1 : k / n) << '\n';
    }

    return 0;
}