void generate(int N, int n, string s, vector<string> &ans)
{
    if (N == n)
    {
        ans.push_back(s);
        return;
    }

    if (s.back() == '1')
    {
        generate(N, n + 1, s + '0', ans);
    }

    else
    {
        generate(N, n + 1, s + '0', ans);
        generate(N, n + 1, s + '1', ans);
    }

    return;
}

vector<string> generateString(int N)
{

    vector<string> ans;
    string str = "";

    generate(N, 0, str, ans);
    return ans;
}