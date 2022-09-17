#include <iostream>
using namespace std;

int main()
{
    long int T;
    cin >> T;

    while (T--)
    {
        long int n, abig = 0, bbig = 0;
        cin >> n;

        long int a[n], b[n];
        for (long int i = 0; i < n; i++)
            cin >> a[i];

        for (long int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] > b[i])
                abig += (a[i] - b[i]);
            else if (b[i] > a[i])
                bbig += (b[i] - a[i]);
        }

        if (abig != bbig)
            cout << -1 << '\n';
        else
            cout << abig << '\n';
    }

    return 0;
}