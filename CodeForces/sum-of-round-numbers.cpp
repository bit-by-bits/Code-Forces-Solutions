#include <iostream>
#include <cmath>
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
        string n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n.length(); i++) if (n[i] != '0') count++;
        cout << count << '\n';
        
        for (int i = 0; i < n.length(); i++) if (n[i] != '0') cout << (int)(n[i] - '0') * pow(10, n.length() - i - 1) << ' ';
        
        cout << '\n';
    }

    return 0;
}