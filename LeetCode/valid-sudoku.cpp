class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            int row[9] = {0};

            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;

                if (row[board[i][j] - '1'])
                    return false;
                else
                    row[board[i][j] - '1'] = 1;
            }
        }

        for (int i = 0; i < 9; i++)
        {
            int col[9] = {0};

            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] == '.')
                    continue;

                if (col[board[j][i] - '1'])
                    return false;
                else
                    col[board[j][i] - '1'] = 1;
            }
        }

        for (int curr_col = 0; curr_col < 9; curr_col += 3)
        {
            for (int curr_row = 0; curr_row < 9; curr_row += 3)
            {
                int box[9] = {0};

                for (int i = curr_row; i < curr_row + 3; i++)
                {

                    for (int j = curr_col; j < curr_col + 3; j++)
                    {
                        if (board[j][i] == '.')
                            continue;

                        if (box[board[j][i] - '1'])
                            return false;
                        else
                            box[board[j][i] - '1'] = 1;
                    }
                }
            }
        }

        return true;
    }
};