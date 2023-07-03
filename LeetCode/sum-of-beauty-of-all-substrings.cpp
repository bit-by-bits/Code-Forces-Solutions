class Solution
{
public:
    int beautySum(string s)
    {

        int ans = 0;
        int n = s.size();
        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            map<char, int> mp;
            for (int j = i; j < n; j++)
            {

                mp[s[j]]++;
                mn = INT_MAX, mx = INT_MIN;

                for (auto it : mp)
                {
                    mn = min(mn, it.second);
                    mx = max(mx, it.second);
                }
                ans += (mx - mn);
            }
            mp.clear();
        }
        return ans;
    }
};