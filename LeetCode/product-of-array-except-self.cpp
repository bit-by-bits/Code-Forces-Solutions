class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        const int LIMIT = nums.size();

        vector<int> left(LIMIT);
        vector<int> right(LIMIT);
        vector<int> ans(LIMIT);

        left[0] = 1;
        right[LIMIT - 1] = 1;

        for (int i = 0; i < LIMIT - 1; i++)
        {
            left[i + 1] = left[i] * nums[i];
        }

        for (int i = LIMIT - 1; i > 0; i--)
        {
            right[i - 1] = right[i] * nums[i];
        }

        for (int i = 0; i < LIMIT; i++)
        {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};