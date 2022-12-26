#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, count = 0;
    cin >> num;

    while (num)
    {
        if (num % 2)
            num--;
        else
            num /= 2;
        
        count++;
    }

    return count;
}