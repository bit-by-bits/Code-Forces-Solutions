#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++)
    {
        int num = (int)(x[i] - '0');
        
        if (!(i == 0 && num == 9) && num > 4)
            cout << 9 - num;
        else
            cout << num;
    }

    cout << '\n';
    return 0;
}