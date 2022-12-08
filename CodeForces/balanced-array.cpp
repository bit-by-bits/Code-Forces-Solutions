#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        int n;
        cin >> n;

        if (n % 4 != 0)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n';

            for (int i = 2;; i++)
            {
                if (i % 6 == 0 || i % 6 == 2)
                    cout << i << ' ';

                if (i == (n * 1.5))
                    break;
            }

            for (int i = 2;; i++)
            {
                if (i % 6 == 3 || i % 6 == 5)
                    cout << i << ' ';

                if (i == (n * 1.5 - 1))
                    break;
            }

            cout << '\n';
        }
    }

    return 0;
}