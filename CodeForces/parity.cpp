#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b, k;
    cin >> b >> k;

    int arr[k], odd = 0;
    for (int i = 0; i < k; i++)
        cin >> arr[i];

    if (b % 2)
    {
        for (int i = 0; i < k; i++)
            if (arr[i] % 2)
                odd++;

        if (odd % 2)
            cout << "odd" << '\n';
        else
            cout << "even" << '\n';
    }

    else
    {
        if (arr[k - 1] % 2)
            cout << "odd" << '\n';
        else
            cout << "even" << '\n';
    }
    return 0;
}