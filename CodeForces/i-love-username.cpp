#include <iostream>
using namespace std;

int main()
{
    int max, min, n, x;
    cin >> n >> x;

    int count = 0;
    max = min = x;

    while (--n)
    {
        cin >> x;
        if (x > max)
        {
            max = x;
            count++;
        }
        else if (x < min)
        {
            min = x;
            count++;
        }
    }

    cout << count;
    return 0;
}