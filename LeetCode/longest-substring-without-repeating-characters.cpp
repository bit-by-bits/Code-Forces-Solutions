class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        int N = s.size();
        vector<int> dict(256, -1);
        int ans = 0;

        int str = 0;
        int end = 0;

        while (end < N)
        {
            int loc = dict[s[end]];
            if (str <= loc)
                str = loc + 1;
            ans = max(ans, end - str + 1);
            dict[s[end++]] = end;
        }

        return ans;
    }
};