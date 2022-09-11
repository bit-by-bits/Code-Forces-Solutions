#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int candy;
        cin >> candy;
        cout << (candy - 1) / 2 << endl;
    }

    return 0;
}