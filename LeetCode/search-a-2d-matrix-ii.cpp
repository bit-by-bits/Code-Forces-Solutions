class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        const int M = matrix.size();
        const int N = matrix[0].size();

        int row = 0;
        int col = N - 1;

        while (row < M && col > -1)
        {
            if (matrix[row][col] < target)
                row++;
            else if (matrix[row][col] > target)
                col--;
            else
                return true;
        }

        return false;
    }
};