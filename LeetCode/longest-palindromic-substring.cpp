class Solution
{
private:
    bool solve(vector<vector<bool>> &dp, int i, int j, string &s)
    {

        if (i == j)
            return dp[i][j] = true;
        else if (j - i == 1)
            return dp[i][j] = (s[i] == s[j]);
        else if (s[i] == s[j])
            return dp[i][j] = dp[i + 1][j - 1];
        else
            return dp[i][j] = false;
    }

public:
    string longestPalindrome(string s)
    {

        int n = s.size();
        int str = 0;
        int len = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int g = 0; g < n; g++)
        {
            for (int i = 0, j = g; j < n; i++, j++)
            {
                solve(dp, i, j, s);
                if (dp[i][j])
                    if (j - i + 1 > len)
                        str = i, len = j - i + 1;
            }
        }

        return s.substr(str, len);
    }
};