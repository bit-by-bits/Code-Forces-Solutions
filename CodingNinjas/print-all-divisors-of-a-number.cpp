vector<int> printDivisors(int n)
{

    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (!(n % i))
        {
            ans.push_back(i);
            if (i * i < n)
                ans.push_back(n / i);
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}