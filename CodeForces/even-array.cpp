#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != i % 2)
            {
                if (i % 2 == 0) odd++;
                else even++;
            }
        }

        if (odd == even) cout << odd << endl;
        else cout << -1 << endl;
    }

    return 0;
}