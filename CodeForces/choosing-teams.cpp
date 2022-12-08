#include <iostream>
#define int long long
using namespace std;

int sum(int arr[], int last)
{
    int ans = 0;
    for (int i = 0; i <= last; i++) ans += arr[i];

    return ans / 3;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int arr[n], num[6] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < 0 || arr[i] > 4) num[5]++;
        else num[arr[i]]++;
    }

    if (k < 2) cout << sum(num, 4);
    else if (k == 2) cout << sum(num, 3);
    else if (k == 3) cout << sum(num, 2);
    else if (k == 4) cout << sum(num, 1);
    else if (k == 5) cout << sum(num, 0);
    else cout << 0;

    cout << '\n';
    return 0;
}