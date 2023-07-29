class Solution
{
public:
    int solve(int i, int j, int M, int N,
              vector<vector<int>> &o, vector<vector<int>> &t)
    {

        if (i == M || j == N || o[i][j])
            return 0;
        if (i == M - 1 && j == N - 1)
            return 1;

        if (t[i][j] != -1)
            return t[i][j];
        return t[i][j] = (solve(i + 1, j, M, N, o, t) + solve(i, j + 1, M, N, o, t));
    }

    int uniquePathsWithObstacles(vector<vector<int>> &o)
    {

        int m = o.size();
        int n = o[0].size();
        if (!m || !n || o[m - 1][n - 1] || o[0][0])
            return 0;

        vector<vector<int>> t(m, vector<int>(n, -1));
        return solve(0, 0, m, n, o, t);
    }
};