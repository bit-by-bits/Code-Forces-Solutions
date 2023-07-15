class Solution
{
public:
    vector<int> nextGreater(vector<int> &nums)
    {

        int N = nums.size();
        if (!N)
            return {};

        stack<int> stk;
        vector<int> ans(N, N);
        for (int i = N - 1; i > -1; i--)
        {

            while (!stk.empty() && nums[i] >= stk.top())
                stk.pop();
            if (stk.size())
                ans[i] = stk.top();
            stk.push(nums[i]);
        }

        return ans;
    }

    vector<int> nextSmaller(vector<int> &nums)
    {

        int N = nums.size();
        if (!N)
            return {};

        vector<int> ans(N, N);
        stack<pair<int, int>> stk;
        for (int i = N - 1; i > -1; i--)
        {

            while (stk.size() && nums[i] <= stk.top().first)
                stk.pop();
            if (stk.size())
                ans[i] = stk.top().second;
            stk.push({nums[i], i});
        }

        return ans;
    }

    vector<int> prevSmaller(vector<int> &nums)
    {

        int N = nums.size();
        if (!N)
            return {};

        vector<int> ans(N, -1);
        stack<pair<int, int>> stk;
        for (int i = 0; i < N; i++)
        {

            while (stk.size() && nums[i] <= stk.top().first)
                stk.pop();
            if (stk.size())
                ans[i] = stk.top().second;
            stk.push({nums[i], i});
        }

        return ans;
    }

    int largestRectangleArea(vector<int> &heights)
    {

        vector<int> prev = prevSmaller(heights);
        vector<int> next = nextSmaller(heights);

        int N = heights.size();
        int ans = *max_element(heights.begin(), heights.end());

        for (int i = 0; i < N; i++)
        {
            ans = max(ans, (next[i] - prev[i] - 1) * (heights[i]));
        }

        return ans;
    }
};