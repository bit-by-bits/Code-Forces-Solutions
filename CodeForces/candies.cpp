#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, run, x) for (auto x = (start) - ((start) > (run)); x != (run) - ((start) > (run)); ((start) < (run) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<int, int> m;
    int arr[t], max = -1;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    int key = 2, value = 0;
    while (true)
    {
        if ((key * 2) > max)
            break;
        else
        {
            key *= 2;
            m[++value] = key - 1;
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j <= value; j++)
            if (arr[i] % m[j] == 0)
            {
                cout << arr[i] / m[j] << '\n';
                break;
            }
    }

    return 0;
}