typedef vector<int> vi;
typedef vector<vector<int>> vvi;

class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int D)
    {

        int N = nums.size();
        int S = accumulate(nums.begin(), nums.end(), 0);

        if (D < -S || S < D || (S - D) % 2)
            return 0;

        vvi sums(N + 1, vi(S + 1, 0));
        sums[0][0] = 1;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j <= S; j++)
            {
                sums[i][j] = j >= nums[i - 1] ? sums[i - 1][j - nums[i - 1]] : 0;
                sums[i][j] += sums[i - 1][j];
            }
        }

        return sums[N][(S - D) / 2];
    }
};