#include <cmath>
#include <iomanip>
#include <iostream>
#define int long long
using namespace std;

int factorial(int num)
{
    if (num <= 1)
        return 1;
    else
        return (num * factorial(num - 1));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        cout << fixed << setprecision(0) << pow(2, n - 1) * factorial(n - 1) << '\n';
    }

    return 0;
}