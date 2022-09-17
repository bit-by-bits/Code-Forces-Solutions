#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x;
        cin >> x;

        if (x < 300) cout << 3000 << '\n';
        else cout << x * 10 << '\n';
    }

    return 0;
}