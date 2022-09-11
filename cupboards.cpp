#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int left[t], right[t];
    int ans = 0, lon = 0, loff = 0, ron = 0, roff = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> left[i];
        if (left[i] == 0) loff++;
        else lon++;

        cin >> right[i];
        if (right[i] == 0) roff++;
        else ron++;
    }

    ans += min(ron, roff);
    ans += min(lon, loff);

    cout << ans << '\n';
    return 0;
}