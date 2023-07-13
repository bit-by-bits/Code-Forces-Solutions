vector<int> Solution::prevSmaller(vector<int> &nums)
{

    int N = nums.size();
    if (!N)
        return {};

    stack<int> stk;
    vector<int> ans(N, -1);
    for (int i = 0; i < N; i++)
    {
        while (stk.size() && nums[i] <= stk.top())
            stk.pop();
        if (stk.size())
            ans[i] = stk.top();
        stk.push(nums[i]);
    }

    return ans;
}