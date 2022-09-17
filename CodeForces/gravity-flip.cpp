#include <iostream>
using namespace std;

int main()
{
    int T, min, max;
    cin >> T;

    int a[T];
    for (int i = 0; i < T; i++)
        cin >> a[i];

    for (int i = 0; i < T; i++)
        for (int j = 0; j < T - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }

    for (int i = 0; i < T; i++)
        cout<< a[i] << endl;
    return 0;
}