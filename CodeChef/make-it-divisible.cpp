#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;


        vector<int> cnt(3);
        while (N--)
        {
            int i; cin >> i;
            cnt[i % 3]++;
        }

        if ((0 * cnt[0] + 1 * cnt[1] + 2 * cnt[2]) % 3) cout << -1 << endl;
        
        else
        {
            int ans = min(cnt[1], cnt[2]);
            cnt[1] -= ans, cnt[2] -= ans;
            ans += 2 * (cnt[1] / 3 + cnt[2] / 3);
            cout << ans << endl;
        }
    }

    return 0;
}