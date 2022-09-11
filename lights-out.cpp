#include <iostream>
using namespace std;

int toggle(int ans[3][3], int i, int j)
{
    for (int a = max(0, i - 1); a <= min(2, i + 1); a++) ans[a][j] = !ans[a][j];

    for (int b = max(0, j - 1); b <= min(2, j + 1); b++) ans[i][b] = !ans[i][b];

    ans[i][j] = !ans[i][j];
    return 0;
}

int main()
{
    int arr[3][3], ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            ans[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) if (arr[i][j] % 2 == 1) toggle(ans, i, j);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) cout << ans[i][j];
        cout << '\n';
    }

    return 0;
}