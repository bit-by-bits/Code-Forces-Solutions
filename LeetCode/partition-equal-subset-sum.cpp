typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{
public:
    bool canPartition(vi &nums)
    {

        int N = nums.size();
        int S = accumulate(nums.begin(), nums.end(), 0);

        if (S % 2)
            return false;

        vvi sums(N + 1, vi(S + 1, -1));
        for (int i = 0; i <= N; i++)
            sums[i][0] = 1;
        for (int i = 1; i <= S; i++)
            sums[0][i] = 0;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= S; j++)
            {
                sums[i][j] = j >= nums[i - 1] ? sums[i - 1][j - nums[i - 1]] : false;
                sums[i][j] |= sums[i - 1][j];
            }
        }

        return sums[N][S / 2];
    }
};