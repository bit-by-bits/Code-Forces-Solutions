class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &matrix)
    {

        int N = matrix.size();
        vector<vector<int>> sums(N, vector<int>(N, -1));
        sums[N - 1] = matrix[N - 1];

        for (int i = N - 2; i > -1; i--)
        {
            for (int j = 0; j < N; j++)
            {
                int down = sums[i + 1][j];
                int left = j - 1 > -1 ? sums[i + 1][j - 1] : INT_MAX;
                int right = j + 1 < N ? sums[i + 1][j + 1] : INT_MAX;
                sums[i][j] = min(min(left, right), down) + matrix[i][j];
            }
        }

        return *min_element(sums[0].begin(), sums[0].end());
    }
};