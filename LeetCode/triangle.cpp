class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {

        int N = triangle.size();
        vector<vector<int>> sums;

        for (int i = 0; i < N; i++)
            sums.push_back(vector<int>(triangle[i].size(), -1));

        int M = triangle[N - 1].size();
        for (int i = 0; i < M; i++)
            sums[N - 1][i] = triangle[N - 1][i];

        for (int i = N - 2; i > -1; i--)
        {
            M = triangle[i].size();
            for (int j = 0; j < M; j++)
                sums[i][j] = min(sums[i + 1][j], sums[i + 1][j + 1]) + triangle[i][j];
        }

        return sums[0][0];
    }
};