#include <iostream>
using namespace std;

int main()
{
    int n, m;
    long long int ans = 0;
    cin >> n >> m;

    int arr[m];
    cin >> arr[0];
    ans += arr[0] - 1;

    for (int i = 1; i < m; i++)
    {
        cin >> arr[i];

        if (arr[i] >= arr[i - 1]) ans += arr[i] - arr[i - 1];
        else ans += n - arr[i - 1] + arr[i];
    }

    cout << ans << endl;
    return 0;
}