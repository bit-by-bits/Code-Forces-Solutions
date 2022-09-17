#include <iostream>
using namespace std;

int main()
{
    int T, a = 0, b = 0, c = 0;
    cin >> T;

    int arr[T], ans = 0;
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
        switch (arr[i])
        {
            case 1: a++;
                break;
            case 2: b++;
                break;
            case 3: c++;
                break;
            case 4: ans++;
                break;
        }
    }

    ans += (b / 2) + c;
    if (b % 2 == 0) b = 0;
    else b = 1;

    if (a > c)
    {
        a -= c;
        c = 0;

        switch (a % 4)
        {
            case 0: ans += (a / 4) + b;
                break;
            case 1: ans += (a / 4) + 1;
                break;
            case 2: ans += (a / 4) + 1;
                break;
            case 3: ans += (a / 4) + 1 + b;
                break;
        }
    }
    else
    {
        c = a = 0;
        if (b) ans++;
    }
    
    cout << ans << endl;
    return 0;
}