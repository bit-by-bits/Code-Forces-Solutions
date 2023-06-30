class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {

        int SIZE = matrix.size();

        int start = 0, j = 0;
        int end = SIZE - 1;
        while (start <= end)
        {

            for (int i = start; i < end; i++)
            {
                j = end - i + start;

                swap(matrix[start][i], matrix[i][end]);
                swap(matrix[end][j], matrix[j][start]);
                swap(matrix[start][i], matrix[end][j]);
            }

            start++;
            end--;
        }
    }

    // void rotate(vector<vector<int>> &matrix)
    // {
    //     reverse(matrix.begin(), matrix.end());
    //     for (int i = 0; i < matrix.size(); ++i)
    //     {
    //         for (int j = i + 1; j < matrix[i].size(); ++j)
    //             swap(matrix[i][j], matrix[j][i]);
    //     }
    // }
};