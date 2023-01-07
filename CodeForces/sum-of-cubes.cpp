#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

void check(int num, map<int, int> values, int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        int ans = 0, start = i, last = limit;
        while (start <= last)
        {
            int mid = start + (last - start) / 2;
            // cout << mid << " = " << start << " + " << last << endl;

            if (values[i] + values[mid] == num)
            {
                ans = values[i] + values[mid];
                cout << ans << " = " << i << " + " << mid << '\n';
                // cout << ans << " = " << values[i] << " + " << values[mid] << '\n';
                break;
            }
            else if (values[i] + values[mid] > num)
                last = mid - 1;
            else
                start = mid + 1;
        }

        if (ans == num)
        {
            cout << "YES\n";
            break;
        }

        if (values[i] > num)
        {
            cout << "NO\n";
            break;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int x[t], temp_MAX = -1, value = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> x[i];
        temp_MAX = max(x[i], temp_MAX);
    }

    map<int, int> cubes;
    do
    {
        value++;
        cubes[value] = (int)pow(value, 3);
    } while (cubes[value] < temp_MAX);

    for (int i = 0; i < t; i++)
        check(x[i], cubes, value);
    return 0;
}