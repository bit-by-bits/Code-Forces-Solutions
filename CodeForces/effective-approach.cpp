#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    long long int position[n];
    for (long long int a = 0; a < n; a++)
    {
        int num;
        cin >> num;

        position[num] = a;
    }

    long long int m;
    cin >> m;

    long long int vasya = 0, petya = 0;
    for (long long int a = 0; a < m; a++)
    {
        long long int query;
        cin >> query;
        vasya += (position[query] + 1);
        petya += (n - position[query]);
    }

    cout << vasya << ' ' << petya << '\n';
    return 0;
}