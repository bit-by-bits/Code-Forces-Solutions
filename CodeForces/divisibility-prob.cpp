#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, ans;
        cin >> a >> b;

        if (a % b == 0) ans = 0;
        else ans = b - a % b;

        cout << ans << endl;
    }

    return 0;
}