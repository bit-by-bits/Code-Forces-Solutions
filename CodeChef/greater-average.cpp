#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        double a, b, c;
        cin >> a >> b >> c;

        if ((a + b) / 2 > c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}