#include <iostream>
using namespace std;

int main()
{
    int A, B, ans;
    cin >> A >> B;

    if (A != B) ans = 2 * max(A, B) - 1;
    else ans = 2 * A;

    cout << ans << endl;
    return 0;
}