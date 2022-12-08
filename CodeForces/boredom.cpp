#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int count(int a[], int b[], int c[])
{
    int ans = 0;

    for (int i = 0;; i++)
    {
        if (a[i] == 0)
        {
            ans = i;
            break;
        }
    }
    
    for (int i = 0;; i++)
    {
        if (b[i] == 0)
        {
            ans = min(i, ans);
            break;
        }
    }

    for (int i = 0;; i++)
    {
        if (c[i] == 0)
        {
            ans = min(i, ans);
            break;
        }
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n] = {0}, one[n] = {0}, two[n] = {0}, three[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1) one[i] = i + 1;
        else if (arr[i] == 2) two[i] = i + 1;
        else if (arr[i] == 3) three[i] = i + 1;
    }

    sort(one, one + n, greater<int>());
    sort(two, two + n, greater<int>());
    sort(three, three + n, greater<int>());

    int limit = count(one, two, three);
    cout << limit << '\n';

    if (limit) for (int i = 0; i < limit; i++) cout << one[i] << ' ' << two[i] << ' ' << three[i] << '\n';

    return 0;
}