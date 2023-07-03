class Solution
{
public:
    string frequencySort(string s)
    {

        vector<pair<int, char>> count;
        for (int i = 0; i < 10; i++)
            count.push_back({0, (char)(i + '0')});
        for (int i = 0; i < 26; i++)
            count.push_back({0, (char)(i + 'a')});
        for (int i = 0; i < 26; i++)
            count.push_back({0, (char)(i + 'A')});

        for (char c : s)
        {
            if (c <= '9')
                count[c - '0'].first++;
            else if (c <= 'Z')
                count[c - 'A' + 36].first++;
            else
                count[c - 'a' + 10].first++;
        }

        sort(count.begin(), count.end());

        string ans = "";
        int ptr = count.size();

        while (ptr > 0 && count[--ptr].first)
        {
            while (count[ptr].first--)
                ans.push_back(count[ptr].second);
        }

        return ans;
    }
};