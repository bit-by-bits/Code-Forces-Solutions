#include <iostream>
using namespace std;

int main()
{
    string S;
    int N, K;
    cin >> N >> K >> S;

    S[K - 1] = S[K - 1] + 32;
    cout << S << endl;

    return 0;
}