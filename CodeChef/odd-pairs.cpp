#include <iostream>
using namespace std;

int main()
{
    long long int T;
    cin >> T;

    while (T--)
    {
        long long int num, even = 0, odd = 0;
        cin >> num;
        
        odd = ++num / 2;
        even = --num / 2;

        cout << odd * even * 2 << '\n';
    }

    return 0;
}