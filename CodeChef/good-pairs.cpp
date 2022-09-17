#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        int n, count = 0;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int k = 1;
        for (int i = 1; i <= n; i++)
        {
            if(arr[i - 1] == arr[i]) k++;
            else {
                count += (k * (k - 1) ) / 2;
                k = 1;
            }   
        }
        cout << count << '\n';
    }

    return 0;
}