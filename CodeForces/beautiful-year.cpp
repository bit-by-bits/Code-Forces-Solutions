#include <iostream>
using namespace std;

int check(int a)
{
    int temp[4];

    for (int i = 0; i < 4; i++)
    {
        temp[i] = a % 10;
        a /= 10;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
            if (temp[j] == temp[i]) return false;
    }

    return true;
}

int main()
{
    int y, ans;
    cin >> y;

    ans = ++y;
    while (!check(y++))
        ans = y;

    cout << ans << endl;
    return 0;
}