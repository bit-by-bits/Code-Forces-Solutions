#include <iostream>
using namespace std;

int main()
{
    int T, ans = 0;
    cin >> T;

    int home[T], guest[T];
    for (int i = 0; i < T; i++) cin >> home[i] >> guest[i];
    
    for (int i = 0; i < T; i++) for (int j = 0; j < T; j++) if (home[i] == guest[j]) ans++;

    cout << ans << endl;
    return 0;
}