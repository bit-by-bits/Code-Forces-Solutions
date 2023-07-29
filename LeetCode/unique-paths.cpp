class Solution
{
public:
    int solve(int i, int j, int M, int N, vector<vector<int>> &t)
    {

        if (i == M || j == N)
            return 0;
        if (i == M - 1 && j == N - 1)
            return 1;

        if (t[i][j] != -1)
            return t[i][j];
        return (t[i][j] = solve(i + 1, j, M, N, t) + solve(i, j + 1, M, N, t));
    }

    int uniquePaths(int m, int n)
    {

        vector<vector<int>> t(m, vector<int>(n, -1));
        return solve(0, 0, m, n, t);
    }
};