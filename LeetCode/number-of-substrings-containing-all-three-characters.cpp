class Solution
{
public:
    int numberOfSubstrings(string s)
    {

        int N = s.size();

        int ans = 0;
        unordered_map<char, int> map;

        int str = 0, end = -1;
        while (++end < N)
        {

            map[s[end]]++;

            while (map['a'] && map['b'] && map['c'])
            {
                ans += (N - end);
                map[s[str++]]--;
            }
        }

        return ans;
    }
};