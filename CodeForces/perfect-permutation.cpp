#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 != 0) cout << -1 << '\n';
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0) cout << 1 + i << '\n';
            else cout << i - 1 << '\n';
        }
    }

    return 0;
}