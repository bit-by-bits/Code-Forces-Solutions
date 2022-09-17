#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, l, d = 0;
    cin >> n >> l;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 1; i < n; i++) d = max(d, arr[i] - arr[i - 1]);

    d = max(d, 2 * max(arr[0], l - arr[n - 1]));
    cout << fixed << setprecision(11) << double(d) / 2 << endl;

    return 0;
}