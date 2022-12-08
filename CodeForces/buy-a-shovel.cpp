#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int charge, change, i = 0;
    cin >> charge >> change;

    while (++i)
    {
        if (((charge * i) % 10 == change) || ((charge * i) % 10 == 0))
        {
            cout << i << '\n';
            break;
        }

    }

    return 0;
}