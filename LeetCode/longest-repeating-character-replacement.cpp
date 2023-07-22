class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int ans = -1;
        int temp = 0;
        int n = s.size();

        int i = 0, j = 0;
        unordered_map<char, int> mp;

        while (j < n)
        {
            char c = s[j];

            mp[c]++;
            temp = max(temp, mp[c]);

            if (j - i + 1 > k + temp)
                mp[s[i++]]--;
            ans = max(ans, (j++ - i + 1));
        }
        return ans;
    }
};