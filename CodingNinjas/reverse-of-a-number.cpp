#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int ans = 0;

    cin >> num;
    while (num)
    {
        ans = 10 * ans + num % 10;
        num /= 10;
    }

    cout << ans;
    return 0;
}
