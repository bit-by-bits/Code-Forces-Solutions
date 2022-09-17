#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string word, ans;
    cin >> n >> word;

    if (n < 26)
        ans = "NO";
    else
    {
        std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

        for (char c : alphabet)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (char(tolower(word[j])) != c)
                {
                    count++;
                }
            }

            if (count == n)
            {
                ans = "NO";
                break;
            }

            ans = "YES";
        }
    }

    cout << ans << endl;
    return 0;
}