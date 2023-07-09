class Solution
{
public:
    void generate(int total, int used, int left, string s, vector<string> &ans)
    {

        if (used == total)
        {
            ans.push_back(s);
            return;
        }

        if (used + left == total)
        {
            for (int i = 0; i < left; i++)
                s += ')';
            ans.push_back(s);
            return;
        }

        if (s.back() == '(' || left)
            generate(total, used + 1, left - 1, s + ')', ans);
        generate(total, used, left + 1, s + '(', ans);
    }

    vector<string> generateParenthesis(int n)
    {

        vector<string> ans;
        string str = "";

        generate(n, 0, 0, str, ans);
        return ans;
    }
};