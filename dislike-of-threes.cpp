#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, key = 1, index = 0;
    cin >> t;

    int arr[t];
    for (int i = 0; i < t; i++) cin >> arr[i];

    int ans[*max_element(arr, arr + t)] = {0};

    while (!ans[*max_element(arr, arr + t) - 1]) if (key++ % 3 != 0 && (key - 1) % 10 != 3) ans[index++] = key - 1;

    for (int i = 0; i < t; i++) cout << ans[arr[i]-1] <<'\n';
    
    return 0;
}