#include <algorithm>
#include <iterator>
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int digits(int n)
{
    string num = to_string(n);
    return num.size();
}

bool check(int arr1[], int arr2[], int N, int M)
{
    unordered_map<int, int> num;
    for (int i = 0; i < N; i++)
        num[arr1[i]]++;

    for (int i = 0; i < N; i++)
    {
        if (num.find(arr2[i]) == num.end())
            return false;

        if (num[arr2[i]] == 0)
            return false;

        num[arr2[i]]--;
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int maxm = max(digits(*max_element(a, a + n)), digits(*max_element(b, b + n)));

        while (check(a, b, n, n))
            {
            for (int i = 0; i < n; i++)
            {
                if ((find(b, b + n, a[i]) != a + n) && (digits(a[i]) >= maxm))
                    a[i] = digits(a[i]);
                if ((find(a, a + n, b[i]) != b + n) && (digits(b[i]) >= maxm))
                    b[i] = digits(b[i]);
            }
        maxm--;

        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        for (int i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << '\n';
    }
    }
    return 0;
}