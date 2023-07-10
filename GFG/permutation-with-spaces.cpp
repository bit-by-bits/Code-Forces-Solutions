class Solution
{
public:
    void add(string s, int idx, string curr, vector<string> &ans)
    {

        if (idx == s.size())
            ans.push_back(curr);
        else
        {
            add(s, idx + 1, curr + s[idx], ans);
            add(s, idx + 1, curr + ' ' + s[idx], ans);
        }
    }

    vector<string> permutation(string s)
    {

        string str = "";
        vector<string> ans;

        add(s, 1, str + s[0], ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};