#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

bool check(int n, int m)
{
    for (int i = n + 1; i < m; i++) if (prime(i)) return false;
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (n < m && prime(m) && check(n, m)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}