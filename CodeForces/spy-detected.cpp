#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            if (i == 0 && (arr[0] != arr[1]) && (arr[1] == arr[2]))
                cout << 1 << '\n';

            else if (i == n - 1 && (arr[n - 2] != arr[n - 1]) && (arr[n - 2] == arr[n - 3]))
                cout << n << '\n';

            else if (i != 0 && i != n - 1 && (arr[i] != arr[i + 1]) && (arr[i] != arr[i - 1]))
                cout << i + 1 << '\n';
        }
    }

    return 0;
}