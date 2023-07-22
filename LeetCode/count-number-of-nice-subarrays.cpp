class Solution
{
public:
    int atMostK(vector<int> nums, int k)
    {

        int odd = 0, ans = 0;
        int str = 0, end = -1;

        const int N = nums.size();
        while (++end < N)
        {
            if (nums[end] % 2)
                k--;
            while (k < 0 && str < N)
                if (nums[str++] % 2)
                    k++;
            ans += (end - str + 1);
        }

        return ans;
    }

    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};