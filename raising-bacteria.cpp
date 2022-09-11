#include <iostream>
#include <bitset>
using namespace std;

// bool check(int test)
// {
//     if (test % 2 == 1)
//     {
//         if (test == 1) return true;
//         else return false;
//     }

//     else return check(test / 2);
// }

int main()
{
    int x, ans = 0;
    cin >> x;

    if (x % 2 == 1)
    {
        x--;
        ans++;
    }

    string bin = bitset<30>(x).to_string();

    for (int a = 0; a < bin.length(); a++) if (bin[a] == '1') ans++;

    cout << ans << '\n';
    return 0;

    // while (x--)
    // {
    //     for (int i = x + 1; i > 0; i--)
    //     {
    //         if (check(i))
    //         {
    //             x -= i - 1;
    //             ans++;
    //             break;
    //         };
    //     }
    // }
}