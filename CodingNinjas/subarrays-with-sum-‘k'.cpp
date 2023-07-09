void subs(int n, int k, string str, string s, vector<string> &ans)
{

    if (k == n)
    {
        ans.push_back(s);
        return;
    }

    for (int i = k; i < n; i++)
    {
        if (i > k && str[i - 1] == str[i])
            continue;
        subs(n, i + 1, str, s + str[i], ans);
    }
}

string moreSubsequence(int n, int m, string a, string b)
{

    vector<string> av;
    vector<string> bv;

    subs(n, 0, a, "", av);
    subs(m, 0, b, "", bv);

    return av.size() >= bv.size() ? a : b;
}