class Solution
{
public:
    void perm(string s, int i, string curr, vector<string> &ans)
    {

        if (i == s.size())
            ans.push_back(curr);
        else
        {
            bool bool1 = ('A' <= s[i] && s[i] <= 'Z');
            bool bool2 = ('a' <= s[i] && s[i] <= 'z');

            if (bool1)
                perm(s, i + 1, curr + (char)(s[i] - 'A' + 'a'), ans);
            if (bool2)
                perm(s, i + 1, curr + (char)(s[i] - 'a' + 'A'), ans);
            perm(s, i + 1, curr + s[i], ans);
        }
    }

    vector<string> letterCasePermutation(string s)
    {

        vector<string> ans;
        perm(s, 0, "", ans);
        return ans;
    }
};