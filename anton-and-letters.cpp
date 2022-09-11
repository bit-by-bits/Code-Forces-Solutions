#include <iostream>
using namespace std;

int main()
{
    char arr[1001] = {0};
    int i = 1, j = -1;

    cin >> arr[0] >> arr[1];
    if (arr[1] == '}')
    {
        cout << 0 << endl;
        return 0;
    }

    while ((arr[++i] = getchar()) != '}') cin >> arr[i];

    int count[i] = {0};
    while (arr[++j] != '}')
    {
        for (int k = j + 1; k < i; k++)
        {
            if (arr[j] == arr[k])
            {
                count[j] = 1;
                break;
            }
        }
    }

    int ans = 0;
    for (int k = 0; k < i; k++) if (!count[k]) ans++;

    cout << ans - 1 << endl;
    return 0;
}