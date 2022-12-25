#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> m;

    m["IV"] = 4;
    m["IX"] = 9;
    m["XL"] = 40;
    m["XC"] = 90;
    m["CD"] = 400;
    m["CM"] = 900;

    m["I"] = 1;
    m["V"] = 5;
    m["X"] = 10;
    m["L"] = 50;
    m["C"] = 100;
    m["D"] = 500;
    m["M"] = 1000;

    string s;
    cin >> s;
    int temp = 0;

    while (s.length())
    {
        if (s.length() > 1 && m[s.substr(s.length() - 2, 2)] > 3)
        {
            temp += m[s.substr(s.length() - 2, 2)];
            s = s.substr(0, s.length() - 2);
        }
        else
        {
            temp += m[s.substr(s.length() - 1, 1)];
            s = s.substr(0, s.length() - 1);
        }
    }

    cout << temp << '\n';
    return 0;
}