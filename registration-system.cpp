#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, last = 0, index = 0;
    cin >> n;

    string words[n], extra[n];
    for (int i = 0; i < n; i++)
        cin >> words[i];
    sort(words, words + n);

    extra[0] = words[0];
    cout << "OK" << '\n';
    for (int a = 1; a < n; a++)
    {
        if ((words[a] == words[a - 1]) && (words[a] != extra[index]))
        {
            cout << words[0] + (char)(47 + a - last) << '\n';
        }
        else
        {
            extra[++index] = words[a];
            cout << "OK" << '\n';
            last = a;
        }
    }

    return 0;
}