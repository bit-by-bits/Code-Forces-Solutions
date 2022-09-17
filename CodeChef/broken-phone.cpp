#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    string ans;
    cin >> T;

    while (T--)
    {
        int repair, buy;
        cin >> repair >> buy;

        if (repair == buy) ans = "ANY";
        else if (repair < buy) ans = "REPAIR";
        else ans = "NEW PHONE";

        cout << ans << '\n';
    }

    return 0;
}