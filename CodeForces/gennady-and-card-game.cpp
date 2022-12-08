#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string card;
    cin >> card;

    string options[5];
    for (int i = 0; i < 5; i++)
        cin >> options[i];

    for (int i = 0; i < 5; i++)
    {
        if (options[i][0] == card[0] || options[i][1] == card[1])
        {
            cout << "YES" << '\n';
            return 0;
        }
    };

    cout << "NO" << '\n';
    return 0;
}