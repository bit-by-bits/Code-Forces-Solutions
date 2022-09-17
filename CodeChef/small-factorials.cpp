#include <iostream>
#include <iomanip>
#define int long long
using namespace std;

int32_t factorial(int num)
{
    if (num <= 1) return 1;
    else return (num * factorial(num-1));
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while (T--)
    {
        int n; cin >> n;
        cout << factorial(n) << '\n';
    }

    return 0;
}