#include <bits/stdc++.h>
using namespace std;

int static t[10001];

int main()
{

    memset(t, -1, sizeof(t));

    int N;
    cin >> N;

    t[0] = t[1] = 1;
    for (int i = 2; i < N; i++)
        t[i] = t[i - 1] + t[i - 2];

    cout << t[N - 1];

    return 0;
}