// class Solution {
// public:
//     bool check(vector<string> strs, int idx, char ch) {
//         for (auto x: strs) if (x[idx] != ch) return false;
//         return true;
//     }

//     string longestCommonPrefix(vector<string>& strs) {

//         sort(strs.begin(), strs.end(),
//         [](string a, string b) { return a.length() < b.length(); } );

//         const int SIZE = strs[0].length();
//         for (int i = 0; i < SIZE; i++) {
//             if (!check(strs, i, strs[0][i])) return strs[0].substr(0, i);
//         }

//         return strs[0];
//     }
// };

class Solution
{
public:
    string longestCommonPrefix(vector<string> &v)
    {

        string ans = "";
        sort(v.begin(), v.end());

        int n = v.size();
        string first = v[0], last = v[n - 1];

        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
                return ans;
            ans += first[i];
        }

        return ans;
    }
};