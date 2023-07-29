class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {

        int M = grid.size();
        int N = grid[0].size();

        int prev, minm;
        vector<vector<int>> mps(M, vector<int>(N, -1));

        prev = 0;
        for (int i = 0; i < M; i++)
        {
            mps[i][0] = prev + grid[i][0];
            prev = mps[i][0];
        }

        prev = 0;
        for (int i = 0; i < N; i++)
        {
            mps[0][i] = prev + grid[0][i];
            prev = mps[0][i];
        }

        for (int i = 1; i < M; i++)
        {
            for (int j = 1; j < N; j++)
            {
                minm = min(mps[i - 1][j], mps[i][j - 1]);
                mps[i][j] = minm + grid[i][j];
            }
        }

        return mps[M - 1][N - 1];
    }
};