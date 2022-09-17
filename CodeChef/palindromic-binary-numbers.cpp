#include <bitset>
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int num)
{
    string bin = bitset<30>(num).to_string();

    int len = bin.length();
    for (int a = 0; a < len; a++) if (bin[a] != bin[len - a]) return false;
    
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int arr[T];
    for (int i = 0; i < T; i++)
        cin >> arr[i];

    int maxm = *max_element(arr, arr + T);
    for (int i = 0; i < maxm; i++)
    {
        // if (check(i))
        cout << check(i) << '\n';
    }

    return 0;
}