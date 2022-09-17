#include <iostream>
using namespace std;

int main()
{
    int A, B, ans;
    cin >> A >> B;

    if (A > 12) ans = B;
    else if (5 < A && A < 13) ans = B / 2;
    else ans = 0;

    cout << ans << endl;

    return 0;
}