#include <iostream>
using namespace std;

int main()
{
    int T, ans = 0;
    cin >> T;

    while (T--)
    {
        string poly;
        cin >> poly;

        if (poly == "Tetrahedron")
            ans += 4;
        else if (poly == "Cube")
            ans += 6;
        else if (poly == "Octahedron")
            ans += 8;
        else if (poly == "Dodecahedron")
            ans += 12;
        else if (poly == "Icosahedron")
            ans += 20;
    }

    cout << ans << endl;
    return 0;
}