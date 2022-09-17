#include <iostream>
#include <algorithm>
using namespace std;

int look(int arr[], int start, int end, int key)
{
    if (end >= start)
    {
        int mid = (start + end) / 2;
        cout << mid << ' ';

        if (arr[mid] == key)
            return mid + 1;
        if (arr[mid] > key)
            return look(arr, start, mid - 1, key);
        else
            return look(arr, mid + 1, end, key);
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int sell[n];
    for (int i = 0; i < n; i++)
        cin >> sell[i];

    int q;
    cin >> q;
    int spend[q];

    sort(sell, sell + n);
    for (int i = 0; i < q; i++)
        cin >> spend[i];

    for (int i = 0; i < q; i++)
    {
        int ans = look(sell, 0, n - 1, spend[i]);

        // if (ans == -1)
        //     cout << endl << spend[i] << ' ' << q;
        // else
        //     cout << endl << spend[i] << ' ' << ans;
    }

    return 0;
}