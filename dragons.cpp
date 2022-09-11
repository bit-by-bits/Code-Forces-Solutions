#include <iostream>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                int temp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = temp;

                temp = y[j + 1];
                y[j + 1] = y[j];
                y[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (s > x[i]) s += y[i];
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}