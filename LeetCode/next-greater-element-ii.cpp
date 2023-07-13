class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {

        int N = nums.size();
        if (!N)
            return {};

        stack<int> stk;
        vector<int> ans(N, -1);
        for (int i = 2 * N - 1; i > -1; i--)
        {
            if (i > N || ans[i % N] == -1)
            {
                while (stk.size() && nums[i % N] >= stk.top())
                    stk.pop();
                if (stk.size())
                    ans[i % N] = stk.top();
            }

            stk.push(nums[i % N]);
        }

        return ans;
    }
};