#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    map<char, int> m;
    for (int a = 0; a < magazine.length(); a++)
        m[magazine[a]] = ++m[magazine[a]];

    for (int b = 0; b < ransomNote.length(); b++)
    {
        if (!m[ransomNote[b]])
            return false;
        else
            m[ransomNote[b]]--;
    }

    return true;
}