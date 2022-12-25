#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    int mat[m][n];
    for (int a = 0; a < m; a++)
        for (int b = 0; b < n; b++)
        {
            int temp_INT;
            cin >> temp_INT;
            mat[a][b] = temp_INT;
        }

    int k;
    cin >> k;

    int temp_ARRAY[m];
    map<int, int> temp_MAP;
    vector<int> temp_VEC;
    
    for (int a = 0; a < m; a++)
    {
        int one = 0;
        for (int b = 0; b < n; b++)
            mat[a][b] && one++;

        temp_MAP[a] = temp_ARRAY[a] = one;
    }

    sort(temp_ARRAY, temp_ARRAY + m);
    for (int a = 0; a < k; a++)
        for (int b = 0; b < m; b++)
        {
            if (temp_MAP[b] == temp_ARRAY[a])
                temp_VEC.push_back(b);
            temp_MAP[b] = -1;
        }
    
    return temp_VEC;
}