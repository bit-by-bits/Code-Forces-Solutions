// class Solution
// {
// public:
//     void kill(int last, int m, int k, vector<int> &store)
//     {
//         if (store.size() != 1)
//         {
//             last = (last + k - 1) % store.size();
//             store.erase(store.begin() + last);
//             kill(last, m - 1, k, store);
//         }
//     }

//     int safePos(int n, int k)
//     {

//         vector<int> store;
//         for (int i = 0; i < n; i++)
//             store.push_back(i + 1);
//         kill(0, n, k, store);
//         return store[0];
//     }
// };

(safePos(n - 1, k) + k - 1) % n + 1