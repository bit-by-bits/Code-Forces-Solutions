void subs(int i, int sum, vector<int> &ans, vector<int> num)
{
    if (i == num.size())
        ans.push_back(sum);
    else
        subs(i + 1, sum, ans, num), subs(i + 1, sum + num[i], ans, num);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    subs(0, 0, ans, num);
    sort(ans.begin(), ans.end());
    return ans;
}