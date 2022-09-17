#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int w, a, b, c;
        cin >> w >> a >> b >> c;

        int arr[] = {a, b, c, a + b, a + c, b + c, a + b + c};
        bool check = find(arr, arr + 7, w) != arr + 7;

        // if (check) cout << "YES\n";
        // else cout << "NO\n";

        cout << *find(arr, arr + 7, w) << '\n';
    }

    return 0;
}