#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> v;
    for (int i = 1; i <= n; i++)
    {
        if (!(i % 5) && !(i % 3))
            v.push_back("FizzBuzz");
        else if (!(i % 3))
            v.push_back("Fizz");
        else if (!(i % 5))
            v.push_back("Buzz");
        else
            v.push_back(to_string(i));
    }

    return v;
}