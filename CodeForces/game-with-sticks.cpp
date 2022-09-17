#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (min(a, b) % 2 == 1) cout << "Akshat" << '\n';
    else cout << "Malvika" << '\n';

    return 0;
}