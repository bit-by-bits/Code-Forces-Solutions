#include <iostream>
using namespace std;

int main()
{
    string s, temp;
    int n, t, ans;
    cin >> n >> t >> s;

    temp = s;

    while (t--)
    {
        for (int i = 0; i < temp.length(); i++)
        {
            if (temp[i] == 'B' && temp[i + 1] == 'G')
            {
                char extra = s[i];
                s[i] = s[i + 1];
                s[i + 1] = extra;
            }
        }

        temp = s;
    }

    cout << s << endl;
    return 0;
}