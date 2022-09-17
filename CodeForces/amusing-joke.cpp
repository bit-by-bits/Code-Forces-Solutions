#include <iostream>
using namespace std;

int main()
{
    string guest, host, pile, ans = "YES";
    cin >> guest >> host >> pile;

    for (int i = 0; i < guest.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < pile.length(); j++)
        {
            if (guest[i] == pile[j])
            {
                flag = true;
                pile[j] = 'a';
                break;
            }
        }

        if (!flag) ans = "NO";
    }

    for (int i = 0; i < host.length(); i++)
    {
        bool flag = false;
        for (int j = 0; j < pile.length(); j++)
        {
            if (host[i] == pile[j])
            {
                flag = true;
                pile[j] = 'a';
                break;
            }
        }

        if (!flag) ans = "NO";
    }

    for (int i = 0; i < pile.length(); i++) if (pile[i] != 'a') ans = "NO";

    cout << ans <<endl;

    return 0;
}