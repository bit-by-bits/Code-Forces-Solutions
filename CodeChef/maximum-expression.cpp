#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, add = 0, sub = 0;
        cin >> n;

        string in, temp = "";
        cin >> in;
        for (int i = 0; i < in.length(); i++)
        {
            if (in[i] == '+')
                add++;
            else if (in[i] == '-')
                sub++;
            else
                temp.insert(temp.length(), 1, in[i]);
        }

        sort(temp.begin(), temp.end(), greater<int>());

        for (int i = 0; i < temp.length() - add - sub; i++)
            cout << temp[i];

        temp = temp.substr(temp.length() - add - sub, add + sub);

        for (int i = 0; i < add; i++) cout << '+' << temp[i];
        
        temp = temp.substr(temp.length() - sub, sub);

        for (int i = 0; i < sub; i++) cout << '-' << temp[i];
        
        cout << '\n';
    }

    return 0;
}