#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int arr[T];
    int flag = 0, sereja = 0, dima = 0;
    for (int i = 0; i < T; i++) cin >> arr[i];
    
    int *start = arr;
    int *end = arr - 1 + T;

    while (end != start)
    {
        int add = 0;
        if (*end > *start)
        {
            add = *end;
            end--;
        }
        else
        {
            add = *start;
            start++;
        }

        if ((flag++) % 2 == 0) sereja += add;
        else dima += add;
    }

    if ((flag++) % 2 == 0) sereja += *end;
    else dima += *end;

    cout << sereja << ' ' << dima;
    return 0;
}