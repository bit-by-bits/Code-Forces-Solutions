class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {

        int SIZE = nums.size();

        int prod = 1, ans = INT_MIN;
        for (int i = 0; i < SIZE; i++)
        {
            prod *= nums[i];
            ans = max(prod, ans);
            if (!prod)
                prod = 1;
        }

        prod = 1;
        for (int i = SIZE - 1; i > -1; i--)
        {
            prod *= nums[i];
            ans = max(prod, ans);
            if (!prod)
                prod = 1;
        }

        return ans;
    }
};