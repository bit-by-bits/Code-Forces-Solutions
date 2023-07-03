class Solution
{
public:
    int romanToInt(string s)
    {

        int SIZE = s.length();
        unordered_map<char, int> mp{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int num = 0;
        for (int i = 0; i < SIZE; i++)
        {

            if (i < SIZE - 1 &&
                    (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
                (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
                (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')))
                num += (mp[s[i + 1]] - mp[s[i++]]);
            else
                num += mp[s[i]];
        }

        return num;
    }
};