int maximumChocolates(int r, int c, vector<vector<int>> &grid)
{
    vector<vector<int>> oldt(c, vector<int>(c));

    for (int row = 0; row < r; row++)
    {

        vector<vector<int>> newt(c, vector<int>(c));

        int M = min(c, row + 1);
        for (int c1 = 0; c1 < M; c1++)
        {

            int N = max(0, c - 1 - row);
            for (int c2 = N; c2 < c; c2++)
            {

                int last = 0;
                for (int o1 = max(0, c1 - 1); o1 <= min(c - 1, c1 + 1); o1++)
                    for (int o2 = max(0, c2 - 1); o2 <= min(c - 1, c2 + 1); o2++)
                        last = max(last, oldt[o1][o2]);

                newt[c1][c2] = last + grid[row][c1] + (c1 == c2 ? 0 : grid[row][c2]);
            }
        }
        oldt = newt;
    }

    int res = 0;
    for (int i = 0; i < c; i++)
        for (int j = 0; j < c; j++)
            res = max(res, oldt[i][j]);
    return res;
}