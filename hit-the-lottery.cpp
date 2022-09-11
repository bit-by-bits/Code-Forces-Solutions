#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int a = T / 100;
    T %= 100;

    int b = T / 20;
    T %= 20;

    int c = T / 10;
    T %= 10;

    int d = T / 5;
    T %= 5;

    cout << a + b + c + d + T << endl;
    return 0;
}