#include <iostream>
#include <string.h>
using namespace std;

int check(string a)
{
    if (a[0] == 'W' && a[1] == 'U' && a[2] == 'B')
        return true;
    return false;
}

int main()
{
    string dub;
    cin >> dub;

    while (check(dub))
        dub = dub.substr(3, dub.length() - 3);

    while (dub.length() != 0)
    {
        while (!check(dub) && dub.length() != 0)
        {
            cout << dub[0];
            dub = dub.substr(1, dub.length() - 1);
        }

        while (check(dub) && dub.length() != 0)
        {
            cout << ' ';
            dub = dub.substr(3, dub.length() - 3);
        }
    }

    return 0;
}