#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ques, min, i = 0;
    cin >> ques >> min;
    min = 240 - min;

    while (++i<=ques)
    {
        if (i * 5 <= min) min -= i * 5;
        else break;
    }

    cout << i - 1 << '\n';
    return 0;
}