class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> store;

        for (auto x : s)
            store[x]++;
        for (auto x : t)
            store[x]--;

        for (char i = 'a'; i <= 'z'; i++)
        {
            if (store[i])
                return false;
        }

        return true;
    }
};