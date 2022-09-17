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

        cout << 4 * a + 2 * b << '\n';
    }

    return 0;
}