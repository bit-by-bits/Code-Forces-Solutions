#include <iostream>
#include <string.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s = "", alice = "", bob = "";
        cin >> s;

        int len = s.length(), index = 1;

        for (int i = 0; i < len; i++)
        {
            char letter;
            char start = s.begin(), last = s.back();
            if (start < last)
            {
                letter = start;
                s = s.substr(1, s.length() - 1);
            }
            else
            {
                letter = last;
                s = s.substr(0, s.length() - 1);
            }
cout << last << '\n';
            if (index % 2 == 1)
                alice.insert(0, 1, letter);
            else
                bob.insert(0, 1, letter);

            index++;
        }

        cout << alice << ' ' << bob << '\n';
    }

    return 0;
}