class Solution
{
public:
    int trap(vector<int> &height)
    {

        int N = height.size();
        vector<int> left(N, -1);
        vector<int> right(N, -1);

        for (int i = 1; i < N; i++)
        {
            left[i] = max(left[i - 1], height[i - 1]);
        }

        for (int i = N - 1; i > 0; i--)
        {
            right[i - 1] = max(right[i], height[i]);
        }

        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            int water = min(left[i], right[i]) - height[i];
            if (water > 0)
                ans += water;
        }

        return ans;
    }
};