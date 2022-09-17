#include <iostream>
using namespace std;

int main()
{
    int n, total = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        total += num;
    }

    total %= n + 1;
    for (int i = 1; i <= 5; i++) if (total++ % (n + 1) != 0) ans++;
    
    cout << ans;
    return 0;
}