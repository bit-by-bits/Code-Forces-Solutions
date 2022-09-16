#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while (q--)
    {
        int n, index;
        string t, ans = "";
        cin >> n >> t;

        index = t.length() - 1;
        while (index >= 0)
        {
            int temp = 0;

            if (t[index] == '0')
            {
                temp += t[index - 1] - 48;
                temp += (t[index - 2] - 48) * 10;

                index -= 3;
            }
            else
            {
                temp += t[index] - 48;
                index--;
            }
            ans.insert(0, 1, (char)(temp + 96));
        }

        cout << ans << '\n';
    }

    return 0;
}