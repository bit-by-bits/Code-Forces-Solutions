#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, ice, dist = 0;
    cin >> num >> ice;

    while (num--)
    {
        char sign;
        int value;
        cin >> sign >> value;

        if (sign == '+')
            ice += value;
        else if (ice >= value)
            ice -= value;
        else
            dist++;
    }

    cout << ice << ' ' << dist << '\n';
    return 0;
}