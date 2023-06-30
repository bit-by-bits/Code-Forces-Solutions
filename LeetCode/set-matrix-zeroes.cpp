// class Solution
// {
// public:
//     void setZeroes(vector<vector<int>> &matrix)
//     {
//         bool row = false;
//         bool col = false;

//         for (int i = 0; i < matrix.size(); i++)
//         {
//             for (int j = 0; j < matrix[0].size(); j++)
//             {
//                 if (!matrix[i][j])
//                 {
//                     if (!i)
//                         row = true;
//                     if (!j)
//                         col = true;

//                     matrix[0][j] = matrix[i][0] = 0;
//                 }
//             }
//         }

//         for (int i = 1; i < matrix.size(); i++)
//             for (int j = 1; j < matrix[0].size(); j++)
//                 if (!matrix[i][0] || !matrix[0][j])
//                     matrix[i][j] = 0;

//         if (col)
//             for (int i = 0; i < matrix.size(); i++)
//                 matrix[i][0] = 0;
//         if (row)
//             for (int j = 0; j < matrix[0].size(); j++)
//                 matrix[0][j] = 0;
//     }
// };

class Solution
{
public:
    void colorRow(vector<vector<int>> &matrix, int row)
    {
        int colSize = matrix[0].size();
        for (int i = 0; i < colSize; i++)
        {
            matrix[row][i] = 0;
        }
    }

    void colorCol(vector<vector<int>> &matrix, int col)
    {
        int rowSize = matrix.size();
        for (int i = 0; i < rowSize; i++)
        {
            matrix[i][col] = 0;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {

        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        int coloredRows[rowSize];
        int coloredCols[colSize];

        for (int i = 0; i < rowSize; i++)
        {
            coloredRows[i] = 0;
        }

        for (int i = 0; i < colSize; i++)
        {
            coloredCols[i] = 0;
        }

        for (int row = 0; row < rowSize; row++)
        {
            for (int col = 0; col < colSize; col++)
            {
                if (matrix[row][col] == 0)
                {
                    coloredRows[row] = 1;
                    coloredCols[col] = 1;
                }
            }
        }

        for (int i = 0; i < rowSize; i++)
        {
            if (coloredRows[i])
                colorRow(matrix, i);
        }

        for (int i = 0; i < colSize; i++)
        {
            if (coloredCols[i])
                colorCol(matrix, i);
        }
    }
};