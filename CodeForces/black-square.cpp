#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4], temp = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    string s;
    cin >> s;

    for (int a = 0; a < s.length(); a++)
        temp += arr[(int)(s[a] - '1')];

    cout << temp << '\n';
    return 0;
}