class Solution
{
public:
    bool check(vector<string> curr, int row, int col)
    {

        for (int i = 0; i < row; i++)
            if (curr[i][col] == 'Q')
                return false;

        for (int i = row - 1, j = col - 1; i > -1 && j > -1; i--, j--)
            if (curr[i][j] == 'Q')
                return false;

        for (int i = row - 1, j = col + 1; i > -1 && j < curr.size(); i--, j++)
            if (curr[i][j] == 'Q')
                return false;

        return true;
    }

    void solve(int row, int N, vector<string> curr, vector<vector<string>> &ans)
    {

        if (row == N)
            ans.push_back(curr);
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (check(curr, row, i))
                {
                    curr[row][i] = 'Q';
                    solve(row + 1, N, curr, ans);
                    curr[row][i] = '.';
                }
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {

        string init = "";
        for (int i = 0; i < n; i++)
            init.push_back('.');

        vector<vector<string>> ans;
        vector<string> board(n, init);

        solve(0, n, board, ans);
        return ans;
    }
};