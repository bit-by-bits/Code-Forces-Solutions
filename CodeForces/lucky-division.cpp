#include <iostream>
#include <string>
using namespace std;

int check(int num)
{
    while (num)
    {
        if (num % 10 != 4 && num % 10 != 7)
            return false;
        num /= 10;
    }

    return true;
}

int main()
{
    int n, i = 0;
    cin >> n;
    int lucky[n] = {0};

    while (++i <= n) if (check(i)) lucky[i - 1] = i;
    
    i = 0;

    while (++i <= n)
    {
        if (lucky[i - 1] != 0 && n % i == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}