#include <cmath>
#include <iostream>
using namespace std;

bool prime(long long int n)
{
    if (n <= 1)
        return false;
    for (long long int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        long double num;
        cin >> num;

        if (num > 3 && ((ceil(sqrt(num)) == floor(sqrt(num)) && prime(sqrt(num)))))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}