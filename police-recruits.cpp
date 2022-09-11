#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, force = 0, crime = 0;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        if (num < 0) (force > 0) ? force-- : crime++;
        else force += num;
    }

    cout << crime << '\n';

    return 0;
}