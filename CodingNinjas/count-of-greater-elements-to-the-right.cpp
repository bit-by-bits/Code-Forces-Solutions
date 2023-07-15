int sorted(stack<int> &st, int val)
{

    if (st.empty() || st.top() > val)
    {
        st.push(val);
        return st.size() - 1;
    }

    int temp = st.top();
    st.pop();

    int cnt = sorted(st, val);
    st.push(temp);

    return cnt;
}

void solve(vector<int> &arr, stack<int> st, vector<int> &ans, int idx)
{

    if (idx < 0)
        return;
    if (st.empty())
        ans[idx] = 0;

    ans[idx] = sorted(st, arr[idx]);
    solve(arr, st, ans, idx - 1);
}

vector<int> countGreater(vector<int> &arr, vector<int> &query)
{

    int M = arr.size();
    int N = query.size();

    stack<int> ds;
    vector<int> ans(M);
    solve(arr, ds, ans, M - 1);

    vector<int> local;
    for (int x : query)
        local.push_back(ans[x]);

    return local;
}