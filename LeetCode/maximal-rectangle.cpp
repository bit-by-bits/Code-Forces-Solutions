class Solution
{
public:
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

    int maximalRectangle(vector<vector<char>> &matrix)
    {

        int N = matrix.size();
        int M = matrix[0].size();

        int ans = 0;
        vector<int> temp(M, 0);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (matrix[i][j] == '1')
                    temp[j]++;
                else
                    temp[j] = 0;
            }

            ans = max(ans, largestRectangleArea(temp));
        }

        return ans;
    }
};