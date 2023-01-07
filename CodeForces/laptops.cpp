// #include <bits/stdc++.h>
// #define int long long
// #define vi vector<int>
// #define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;

//     vector<pair<int, int>> v1, v2;
//     for (int i = 0; i < T; i++)
//     {
//         int temp1, temp2;
//         cin >> temp1 >> temp2;

//         v1.push_back(make_pair(temp1, temp2));
//         v2.push_back(make_pair(temp2, temp1));
//     }

//     sort(v1.begin(), v1.end());
//     sort(v2.begin(), v2.end());

//     for (int i = 0; i < T; i++)
//         for (int j = 0; j < T; j++)
//             if (v1[i].first < v2[j].second && v2[j].first < v1[i].second)
//             {
//                 cout << "Happy Alex" << '\n';
//                 return 0;
//             }

//     cout << "Poor Alex" << '\n';
//     return 0;
// }

TLE