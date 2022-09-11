#include <iostream>
using namespace std;

int main()
{
    int T, odd = 0, even = 0, lodd, leven;
    cin >> T;

    int arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
            leven = i + 1;
        }
        else
        {
            odd++;
            lodd = i + 1;
        }
    }

    if (odd == 1) cout << lodd << endl;
    else cout << leven << endl;
    return 0;
}