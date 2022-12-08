#include <iostream>
#define int long long
using namespace std;

int check(int n, string arr[], string a)
{
    for (int i = 0; i <= n; i++) if (a == arr[i]) return i;
    
    return -1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string arr[t], temp[t];
    int index = 0, extra[t] = {0};
    for (int i = 0; i < t; i++) cin >> arr[i];

    for (int i = 0; i < t; i++)
    {
        int checked = check(index, temp, arr[i]);

        if (checked != -1)
        {
            extra[checked]++;
            cout << arr[i] << extra[checked] << '\n';
        }
        else
        {
            temp[++index] = arr[i];
            cout << "OK" << '\n';
        }
    }

    return 0;
}